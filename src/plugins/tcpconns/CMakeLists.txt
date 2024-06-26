plugin_option(PLUGIN_TCPCONNS "TCP connection statistics" ON)

include(CheckIncludeFile)
include(CheckStructHasMember)

set(BUILD_PLUGIN_TCPCONNS 0)

if(PLUGIN_TCPCONNS)
    if(BUILD_LINUX)
        check_include_file(linux/inet_diag.h HAVE_LINUX_INET_DIAG_H)
        check_struct_has_member("struct inet_diag_req" id "linux/inet_diag.h" HAVE_STRUCT_INET_DIAG_REQ_ID)
        check_struct_has_member("struct inet_diag_req" idiag_states "linux/inet_diag.h" HAVE_STRUCT_INET_DIAG_REQ_IDIAG_STATES)
        if(HAVE_STRUCT_INET_DIAG_REQ_ID AND HAVE_STRUCT_INET_DIAG_REQ_IDIAG_STATES)
            set(HAVE_STRUCT_LINUX_INET_DIAG_REQ 1)
        else()
            set(BUILD_PLUGIN_TCPCONNS_REASON "missing fields in struct inet_diag_req" PARENT_SCOPE)
        endif()
        set(BUILD_PLUGIN_TCPCONNS 1)
    elseif(BUILD_AIX)
        set(BUILD_PLUGIN_TCPCONNS 1)
    elseif(BUILD_FREEBSD)
        if(HAVE_SYSCTLBYNAME)
            set(BUILD_PLUGIN_TCPCONNS 1)
        else()
            set(BUILD_PLUGIN_TCPCONNS_REASON "sysctlbyname not found" PARENT_SCOPE)
        endif()
    elseif(BUILD_NETBSD)
        find_package(LibKvm)
        if(LIBKVM_FOUND)
            check_library_exists(kvm kvm_openfiles "" HAVE_KVM_OPENFILES)
            check_library_exists(kvm nlist "" HAVE_LIBKVM_NLIST)
            if(HAVE_LIBKVM_NLIST)
                check_include_file(bsd/nlist.h HAVE_BSD_NLIST_H)
            endif()
            if(HAVE_KVM_OPENFILES AND HAVE_LIBKVM_NLIST)
                set(BUILD_PLUGIN_TCPCONNS 1)
            else()
                set(BUILD_PLUGIN_TCPCONNS_REASON "kvm_openfiles or nlist not found" PARENT_SCOPE)
            endif()
        else()
            set(BUILD_PLUGIN_TCPCONNS_REASON "kvm not found" PARENT_SCOPE)
        endif()
    elseif(BUILD_OPENBSD)
        find_package(LibKvm)
        if(LIBKVM_FOUND)
            check_library_exists(kvm kvm_openfiles "" HAVE_KVM_OPENFILES)
            check_library_exists(kvm kvm_getfiles "" HAVE_KVM_GETFILES)
            if(HAVE_KVM_OPENFILES AND HAVE_KVM_GETFILES)
                set(BUILD_PLUGIN_TCPCONNS 1)
            else()
                set(BUILD_PLUGIN_TCPCONNS_REASON "kvm_openfiles or kvm_getfiles not found" PARENT_SCOPE)
            endif()
        else()
            set(BUILD_PLUGIN_TCPCONNS_REASON "kvm not found" PARENT_SCOPE)
        endif()
    else()
        set(BUILD_PLUGIN_TCPCONNS_REASON "unsupported system" PARENT_SCOPE)
    endif()
endif()

set(BUILD_PLUGIN_TCPCONNS ${BUILD_PLUGIN_TCPCONNS} PARENT_SCOPE)

if(BUILD_PLUGIN_TCPCONNS)
    set(PLUGIN_TCPCONNS_SRC tcpconns.c)
    set(PLUGIN_TCPCONNS_LIBS libutils libmetric)

    if(BUILD_LINUX)
        if(HAVE_LINUX_INET_DIAG_H)
            list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_LINUX_INET_DIAG_H)
        endif()
        if(HAVE_STRUCT_LINUX_INET_DIAG_REQ)
            list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_STRUCT_LINUX_INET_DIAG_REQ)
        endif()
    elseif(BUILD_NETBSD)
        if(HAVE_BSD_NLIST_H)
            list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_BSD_NLIST_H)
        endif()
        list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_KVM_OPENFILES)
        list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_LIBKVM_NLIST)
        list(APPEND PLUGIN_TCPCONNS_LIBS LibKvm::LibKvm)
    elseif(BUILD_OPENBSD)
        list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_KVM_OPENFILES)
        list(APPEND PLUGIN_TCPCONNS_DEFINITIONS HAVE_KVM_GETFILES)
        list(APPEND PLUGIN_TCPCONNS_LIBS LibKvm::LibKvm)
    endif()

    add_library(tcpconns MODULE ${PLUGIN_TCPCONNS_SRC})
    target_link_libraries(tcpconns PRIVATE ${PLUGIN_TCPCONNS_LIBS})
    target_compile_definitions(tcpconns PUBLIC ${PLUGIN_TCPCONNS_DEFINITIONS})
    set_target_properties(tcpconns PROPERTIES PREFIX "")

#    add_executable(test_plugin_tcpconns EXCLUDE_FROM_ALL tcpconns_test.c ${PLUGIN_TCPCONNS_SRC})
#    target_link_libraries(test_plugin_tcpconns libtest libutils libmetric -lm)
#    add_dependencies(build_tests test_plugin_tcpconns)
#    add_test(NAME test_plugin_tcpconns COMMAND test_plugin_tcpconns WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})

    install(TARGETS tcpconns DESTINATION ${CMAKE_INSTALL_LIBDIR}/ncollectd/)
    configure_file(ncollectd-tcpconns.5 ncollectd-tcpconns.5 @ONLY)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ncollectd-tcpconns.5 DESTINATION ${CMAKE_INSTALL_MANDIR}/man5)
endif()

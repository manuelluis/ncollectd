plugin_option(PLUGIN_LOGIND "Systemd plugin" ON)

set(BUILD_PLUGIN_LOGIND 0)

if(PLUGIN_LOGIND)
    find_package(LibSystemd)
    if (LIBSYSTEMD_FOUND)
        check_include_file(systemd/sd-bus.h HAVE_SYSTEMD_SD_BUS_H)
        if (HAVE_SYSTEMD_SD_BUS_H)
            set(BUILD_PLUGIN_LOGIND 1)
        else()
            set(BUILD_PLUGIN_LOGIND_REASON "systemd/sd-bus.h not found" PARENT_SCOPE)
        endif()
    else()
        set(BUILD_PLUGIN_LOGIND_REASON "libsystemd not found" PARENT_SCOPE)
    endif()
endif()

set(BUILD_PLUGIN_LOGIND ${BUILD_PLUGIN_LOGIND} PARENT_SCOPE)

if(BUILD_PLUGIN_LOGIND)
    set(PLUGIN_LOGIND_SRC logind.c)
    add_library(logind MODULE ${PLUGIN_LOGIND_SRC})
    target_link_libraries(logind PRIVATE libutils libmetric LibSystemd::LibSystemd)
    set_target_properties(logind PROPERTIES PREFIX "")
    install(TARGETS logind DESTINATION ${CMAKE_INSTALL_LIBDIR}/ncollectd/)
    configure_file(ncollectd-logind.5 ncollectd-logind.5 @ONLY)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ncollectd-logind.5 DESTINATION ${CMAKE_INSTALL_MANDIR}/man5)
endif()

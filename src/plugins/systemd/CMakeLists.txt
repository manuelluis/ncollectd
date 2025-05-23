plugin_option(PLUGIN_SYSTEMD "Systemd plugin" ON)

set(BUILD_PLUGIN_SYSTEMD 0)

if(PLUGIN_SYSTEMD)
    if(BUILD_LINUX)
        check_include_file(linux/config.h HAVE_LINUX_CONFIG_H)
        find_package(LibSystemd)
        if (LIBSYSTEMD_FOUND)
            check_include_file(systemd/sd-bus.h HAVE_SYSTEMD_SD_BUS_H)
            if (HAVE_SYSTEMD_SD_BUS_H)
                set(BUILD_PLUGIN_SYSTEMD 1)
            else()
                set(BUILD_PLUGIN_SYSTEMD_REASON "systemd/sd-bus.h not found" PARENT_SCOPE)
            endif()
        else()
            set(BUILD_PLUGIN_SYSTEMD_REASON "libsystemd not found" PARENT_SCOPE)
        endif()
    else()
        set(BUILD_PLUGIN_SYSTEMD_REASON "Linux only" PARENT_SCOPE)
    endif()
endif()

set(BUILD_PLUGIN_SYSTEMD ${BUILD_PLUGIN_SYSTEMD} PARENT_SCOPE)

if(BUILD_PLUGIN_SYSTEMD)
    gperf_generate(memorystat.gperf "${CMAKE_CURRENT_BINARY_DIR}/memorystat.h" MEMORYSTAT_H)
    set(PLUGIN_SYSTEMD_SRC systemd.c ${MEMORYSTAT_H})
    add_library(systemd MODULE ${PLUGIN_SYSTEMD_SRC})
    target_link_libraries(systemd PRIVATE libutils libmetric LibSystemd::LibSystemd)
    set_target_properties(systemd PROPERTIES PREFIX "")
    if(HAVE_LINUX_CONFIG_H)
        target_compile_definitions(systemd PUBLIC HAVE_LINUX_CONFIG_H)
    endif()
    install(TARGETS systemd DESTINATION ${CMAKE_INSTALL_LIBDIR}/ncollectd/)
    configure_file(ncollectd-systemd.5 ncollectd-systemd.5 @ONLY)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ncollectd-systemd.5 DESTINATION ${CMAKE_INSTALL_MANDIR}/man5)
endif()

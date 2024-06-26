plugin_option(PLUGIN_HAPROXY "Haproxy statistics" ON)

set(BUILD_PLUGIN_HAPROXY 0)

if(PLUGIN_HAPROXY)
    find_package(LibCurl)
    if(LIBCURL_FOUND)
        set(BUILD_PLUGIN_HAPROXY 1)
    else()
        set(BUILD_PLUGIN_HAPROXY_REASON "libcurl not found" PARENT_SCOPE)
    endif()
endif()

set(BUILD_PLUGIN_HAPROXY ${BUILD_PLUGIN_HAPROXY} PARENT_SCOPE)

if(BUILD_PLUGIN_HAPROXY)
    gperf_generate(haproxy_info.gperf "${CMAKE_CURRENT_BINARY_DIR}/haproxy_info.h" HAPROXY_INFO_H)
    gperf_generate(haproxy_stat.gperf "${CMAKE_CURRENT_BINARY_DIR}/haproxy_stat.h" HAPROXY_STAT_H)
    set(PLUGIN_HAPROXY_SRC haproxy.c haproxy_stat_fams.h haproxy_process_fams.h)
    add_library(haproxy MODULE ${PLUGIN_HAPROXY_SRC} ${HAPROXY_INFO_H} ${HAPROXY_STAT_H})
    target_link_libraries(haproxy PRIVATE libutils libmetric LibCurl::LibCurl)
    set_target_properties(haproxy PROPERTIES PREFIX "")
    install(TARGETS haproxy DESTINATION ${CMAKE_INSTALL_LIBDIR}/ncollectd/)
    configure_file(ncollectd-haproxy.5 ncollectd-haproxy.5 @ONLY)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ncollectd-haproxy.5 DESTINATION ${CMAKE_INSTALL_MANDIR}/man5)
endif()

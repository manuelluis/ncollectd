include(FindPackageHandleStandardArgs)

find_package(PkgConfig QUIET)
pkg_check_modules(PC_LIBVARNISHAPI QUIET varnishapi)
if(PC_LIBVARNISHAPI_VERSION)
    string(REGEX MATCH "[0-9]+" LIBVARNISHAPI_VERSION "${PC_LIBVARNISHAPI_VERSION}")
    if(LIBVARNISHAPI_VERSION)
        set(LIBVARNISHAPI_VERSION ${LIBVARNISHAPI_VERSION} CACHE STRING "Varnish api major version.")
    endif()
endif()

find_path(LIBVARNISHAPI_INCLUDE_DIR NAMES vapi/vsc.h
          HINTS ${PC_LIBVARNISHAPI_INCLUDEDIR} ${PC_LIBVARNISHAPI_INCLUDE_DIRS})
if(NOT LIBVARNISHAPI_INCLUDE_DIR)
    find_path(LIBVARNISHAPI_INCLUDE_DIR NAMES varnishapi.h
              HINTS ${PC_LIBVARNISHAPI_INCLUDEDIR} ${PC_LIBVARNISHAPI_INCLUDE_DIRS})
endif()

find_library(LIBVARNISHAPI_LIBRARIES NAMES varnishapi
             HINTS ${PC_LIBVARNISHAPI_LIBDIR} ${PC_LIBVARNISH_LIBRARY_DIRS})

find_package_handle_standard_args(LibVarnishapi DEFAULT_MSG LIBVARNISHAPI_LIBRARIES LIBVARNISHAPI_INCLUDE_DIR)

mark_as_advanced(LIBVARNISHAPI_INCLUDE_DIR LIBVARNISHAPI_LIBRARIES LIBVARNISHAPI_VERSION)

if(LIBVARNISHAPI_FOUND AND NOT TARGET LibVarnishapi::LibVarnishapi)
    set(LIBVARNISHAPI_INCLUDE_DIRS "${LIBVARNISHAPI_INCLUDE_DIR}")
    set(LIBVARNISHAPI_DEFINITIONS ${PC_LIBVARNISHAPI_CFLAGS_OTHER})
    add_library(LibVarnishapi::LibVarnishapi INTERFACE IMPORTED)
    set_target_properties(LibVarnishapi::LibVarnishapi PROPERTIES
                          INTERFACE_COMPILE_OPTIONS     "${LIBVARNISHAPI_DEFINITIONS}"
                          INTERFACE_INCLUDE_DIRECTORIES "${LIBVARNISHAPI_INCLUDE_DIRS}"
                          INTERFACE_LINK_LIBRARIES      "${LIBVARNISHAPI_LIBRARIES}")
endif()

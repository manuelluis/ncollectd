include(FindPackageHandleStandardArgs)

find_package(PkgConfig QUIET)
pkg_check_modules(PC_LIBOPENIPMI QUIET OpenIPMIpthread)

find_path(LIBOPENIPMI_INCLUDE_DIR NAMES OpenIPMI/ipmi_smi.h
          HINTS ${PC_LIBOPENIPMI_INCLUDEDIR} ${PC_LIBOPENIPMI_INCLUDE_DIRS})
find_library(LIBOPENIPMI_LIBRARIES NAMES OpenIPMI
             HINTS ${PC_LIBOPENIPMI_LIBDIR} ${PC_LIBOPENIPMI_LIBRARY_DIRS})

find_package_handle_standard_args(LibOpenipmi REQUIRED_VARS LIBOPENIPMI_LIBRARIES LIBOPENIPMI_INCLUDE_DIR)

mark_as_advanced(LIBOPENIPMI_INCLUDE_DIR LIBOPENIPMI_LIBRARIES)

if(LIBOPENIPMI_FOUND AND NOT TARGET LibOpenipmi::LibOpenipmi)
    set(LIBOPENIPMI_INCLUDE_DIRS "${LIBOPENIPMI_INCLUDE_DIR}")
    set(LIBOPENIPMI_CFLAGS ${PC_LIBOPENIPMI_CFLAGS_OTHER})
    add_library(LibOpenipmi::LibOpenipmi INTERFACE IMPORTED)
    set_target_properties(LibOpenipmi::LibOpenipmi PROPERTIES
                          INTERFACE_COMPILE_OPTIONS     "${LIBOPENIPMI_CFLAGS}"
                          INTERFACE_INCLUDE_DIRECTORIES "${LIBOPENIPMI_INCLUDE_DIRS}"
                          INTERFACE_LINK_LIBRARIES      "${LIBOPENIPMI_LIBRARIES}")
endif()
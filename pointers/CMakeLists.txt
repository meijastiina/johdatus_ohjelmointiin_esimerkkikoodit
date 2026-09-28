cmake_minimum_required(VERSION 3.16)

project(pointers LANGUAGES C)

add_executable(pointers main.c)

include(GNUInstallDirs)
install(TARGETS pointers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

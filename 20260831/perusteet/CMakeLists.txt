cmake_minimum_required(VERSION 3.16)

project(perusteet LANGUAGES C)

add_executable(perusteet main.c)

include(GNUInstallDirs)
install(TARGETS perusteet
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

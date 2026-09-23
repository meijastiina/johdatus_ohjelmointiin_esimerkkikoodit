cmake_minimum_required(VERSION 3.16)

project(1-4-Laskutoimitukset LANGUAGES C)

add_executable(1-4-Laskutoimitukset main.c)

include(GNUInstallDirs)
install(TARGETS 1-4-Laskutoimitukset
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

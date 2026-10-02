cmake_minimum_required(VERSION 3.16)

project(viikkotehtava5_5 LANGUAGES C)

add_executable(viikkotehtava5_5 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava5_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

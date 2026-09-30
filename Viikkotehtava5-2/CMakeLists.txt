cmake_minimum_required(VERSION 3.16)

project(Viikkotehtava5-2 LANGUAGES C)

add_executable(Viikkotehtava5-2 main.c)

include(GNUInstallDirs)
install(TARGETS Viikkotehtava5-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

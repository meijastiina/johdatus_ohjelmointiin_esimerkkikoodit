cmake_minimum_required(VERSION 3.16)

project(Viikkotehtava3-4_Kertotaulu LANGUAGES C)

add_executable(Viikkotehtava3-4_Kertotaulu main.c)

include(GNUInstallDirs)
install(TARGETS Viikkotehtava3-4_Kertotaulu
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

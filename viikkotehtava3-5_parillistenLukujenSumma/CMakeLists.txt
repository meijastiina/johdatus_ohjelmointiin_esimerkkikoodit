cmake_minimum_required(VERSION 3.16)

project(viikkotehtava3-5_parillistenLukujenSumma LANGUAGES C)

add_executable(viikkotehtava3-5_parillistenLukujenSumma main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava3-5_parillistenLukujenSumma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(viikkotehtava4-4-floatKerrottunaKolmella LANGUAGES C)

add_executable(viikkotehtava4-4-floatKerrottunaKolmella main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava4-4-floatKerrottunaKolmella
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

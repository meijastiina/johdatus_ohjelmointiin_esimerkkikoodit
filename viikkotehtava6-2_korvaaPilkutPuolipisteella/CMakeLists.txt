cmake_minimum_required(VERSION 3.16)

project(viikkotehtava6-2_korvaaPilkutPuolipisteella LANGUAGES C)

add_executable(viikkotehtava6-2_korvaaPilkutPuolipisteella main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava6-2_korvaaPilkutPuolipisteella
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

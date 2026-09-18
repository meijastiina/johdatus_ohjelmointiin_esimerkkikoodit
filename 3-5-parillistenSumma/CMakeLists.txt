cmake_minimum_required(VERSION 3.16)

project(3-5-parillistenSumma LANGUAGES C)

add_executable(3-5-parillistenSumma main.c)

include(GNUInstallDirs)
install(TARGETS 3-5-parillistenSumma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

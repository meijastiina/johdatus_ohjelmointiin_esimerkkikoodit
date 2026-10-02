cmake_minimum_required(VERSION 3.16)

project(testi4 LANGUAGES C)

add_executable(testi4 main.c)

include(GNUInstallDirs)
install(TARGETS testi4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(testi LANGUAGES C)

add_executable(testi main.c)

include(GNUInstallDirs)
install(TARGETS testi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

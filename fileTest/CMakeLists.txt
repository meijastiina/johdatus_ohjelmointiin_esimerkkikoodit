cmake_minimum_required(VERSION 3.16)

project(fileTest LANGUAGES C)

add_executable(fileTest main.c)

include(GNUInstallDirs)
install(TARGETS fileTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

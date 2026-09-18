cmake_minimum_required(VERSION 3.16)

project(floatToInt LANGUAGES C)

add_executable(floatToInt main.c)

include(GNUInstallDirs)
install(TARGETS floatToInt
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(3-3-while2 LANGUAGES C)

add_executable(3-3-while2 main.c)

include(GNUInstallDirs)
install(TARGETS 3-3-while2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

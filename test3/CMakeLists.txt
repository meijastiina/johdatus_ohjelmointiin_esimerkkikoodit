cmake_minimum_required(VERSION 3.16)

project(test3 LANGUAGES C)

add_executable(test3 main.c)

include(GNUInstallDirs)
install(TARGETS test3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

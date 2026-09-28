cmake_minimum_required(VERSION 3.16)

project(gets LANGUAGES C)

add_executable(gets main.c)

include(GNUInstallDirs)
install(TARGETS gets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

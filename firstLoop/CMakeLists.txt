cmake_minimum_required(VERSION 3.16)

project(firstLoop LANGUAGES C)

add_executable(firstLoop main.c)

include(GNUInstallDirs)
install(TARGETS firstLoop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

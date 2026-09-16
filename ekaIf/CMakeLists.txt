cmake_minimum_required(VERSION 3.16)

project(ekaIf LANGUAGES C)

add_executable(ekaIf main.c)

include(GNUInstallDirs)
install(TARGETS ekaIf
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

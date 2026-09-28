cmake_minimum_required(VERSION 3.16)

project(stringFunctions LANGUAGES C)

add_executable(stringFunctions main.c)

include(GNUInstallDirs)
install(TARGETS stringFunctions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(filesExamples LANGUAGES C)

add_executable(filesExamples main.c)

include(GNUInstallDirs)
install(TARGETS filesExamples
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

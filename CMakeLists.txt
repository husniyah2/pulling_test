cmake_minimum_required(VERSION 3.16)

project(Assignment1 LANGUAGES C)

add_executable(Assignment1 main.c
    my_util.h
    my_util.c)

include(GNUInstallDirs)
install(TARGETS Assignment1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(Actividad2-8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Actividad2-8 main.cpp)

include(GNUInstallDirs)
install(TARGETS Actividad2-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

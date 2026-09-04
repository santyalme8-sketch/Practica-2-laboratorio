cmake_minimum_required(VERSION 3.16)

project(Practice-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practice-2 main.cpp)

include(GNUInstallDirs)
install(TARGETS Practice-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_subdirectory(Actividad2-2)
add_subdirectory(Actividad2-3)
add_subdirectory(Actividad2-4)
add_subdirectory(Actividad2-5)
add_subdirectory(Actividad2-6)
add_subdirectory(Actividad2-7)
add_subdirectory(Actividad2-8)
add_subdirectory(Actividad2-9)
add_subdirectory(Actividad2-10)
add_subdirectory(Actividad-11)
add_subdirectory(Actividad-12)
add_subdirectory(Actividad2-17)
add_subdirectory(Actividad2-14)
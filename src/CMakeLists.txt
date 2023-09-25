
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_FLAGS "-Wall -pedantic")

set(CMAKE_CXX_STANDARD 11)

project(GEOMETRIA VERSION 1.0 LANGUAGES CXX )

include_directories("include" "src")

add_executable( GEOMETRIA main.cpp circulo.cpp cubo.cpp esfera.cpp paralelepipedo.cpp piramide.cpp quadrado.cpp retangulo.cpp triangulo.cpp)
cmake_minimum_required(VERSION 3.30)
project(8_practica_contenedores_default_biomed)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(8_practica_contenedores_default_biomed
    src/Estudiante.cpp
    src/Estudiante.h
    src/Gestor.cpp
    src/Gestor.h
    src/Tarea.cpp
    src/Tarea.h
    main.cpp)

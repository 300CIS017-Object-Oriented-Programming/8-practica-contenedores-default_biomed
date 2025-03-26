//
// Created by Asus on 26/03/2025.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <vector>

#include "Tarea.h"


class Estudiante {
private:
    std::vector<Tarea*> tareas;
    std::string nombre;
    int codigoID;
    int semestre;
    int edad;
    std::string carrera;
public:
    Estudiante();
    ~Estudiante();
    void mostrarInfoEstudiante();
    int getCodigo();
    void RegistrarTarea();
    void EliminarTarea();
    void ConteoTarea();
    void MostrarTareas();
    int getTiempoTareas();

};



#endif //ESTUDIANTE_H

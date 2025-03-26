//
// Created by Asus on 26/03/2025.
//

#ifndef GESTOR_H
#define GESTOR_H

#include <map>

#include "Estudiante.h"

class Gestor {
private:
    std::map<std::string, Estudiante*> mapaEstudiantes;
    void inicializarDatos();
public:
    Gestor();
    ~Gestor();
    void registrarEstudiante();
    void eliminarEstudiante(int idEstudiante);
    void registrarNuevaTarea(int codigoEstudiante);
    void eliminarTareaRealizada(int codigoEstudiante);
    void mostrarTareasEstudiante();
    void mostrarEstudiantes();
    void ActualizarInfoEstudiante();
};



#endif //GESTOR_H

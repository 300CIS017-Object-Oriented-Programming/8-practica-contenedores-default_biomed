//
// Created by Asus on 26/03/2025.
//

#ifndef TAREA_H
#define TAREA_H

#include<string>
#include<iostream>


class Tarea {
private:
    int idTarea;
    std::string descripcion;
    std::string tipo;
    int duracion;
    bool indicadorRealizado;
public:
    Tarea();
    void mostrarInfoTarea();
    void setIndicadorRealizado(bool indicadorNuevo);
    bool getIndicadorRealizado();
    int getIdTarea();
    int getDuracion();
    std::string getDescripcion();





};



#endif //TAREA_H

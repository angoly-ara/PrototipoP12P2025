#ifndef FACULTAD_H
#define FACULTAD_H

#include <string>
using namespace std;

class Facultad {
private:
    string nombre;
    float notas[5][4]; // 5 alumnos, 4 evaluaciones
    float promedios[5];
    float promedioFacultad;

public:
    Facultad();
    void setNombre(string nombre);
    string getNombre();
    void generarNotas();
    void calcularPromedios();
    void mostrarDatos();
    float getPromedioFacultad();
    float getMayorNota();
    float getMenorNota();
};

#endif



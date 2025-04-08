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
    Facultad(string nombre);
    void generarNotas();
    void calcularPromedios();
    void mostrarDatos();
    float getPromedioFacultad();
    string getNombre();
    float getMayorNota();
    float getMenorNota();
};

#endif


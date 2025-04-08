// Programa de Angoly Araujo
// Abril 2025
// Segundo Parcial Parte Practica
#include "Facultad.h"
#include <iostream>
using namespace std;

int main() {
    Facultad facultades[3];
    string nombre;
    int i = 0;

// Se ingresa el nombre de las facultades
    while (i < 3) {
        cout << "Ingrese el nombre de la facultad #" << i + 1 << ": ";
        cin >> nombre;

        facultades[i].setNombre(nombre);
        facultades[i].generarNotas();
        facultades[i].calcularPromedios();
        facultades[i].mostrarDatos();

        i++;
    }

    // Determinar la mejor facultad y mejor promedio
    int mejorIdx = 0;
    float mejorPromedio = facultades[0].getPromedioFacultad();

    for (int j = 1; j < 3; ++j) {
        if (facultades[j].getPromedioFacultad() > mejorPromedio) {
            mejorPromedio = facultades[j].getPromedioFacultad();
            mejorIdx = j;
        }
    }

    cout << "\nLa mejor facultad fue: " << facultades[mejorIdx].getNombre()
         << " con un promedio de: " << mejorPromedio << endl;

    return 0;
}

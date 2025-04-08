#include "Facultad.h"
#include <iostream>
using namespace std;

int main() {
    int opcion;
    Facultad* mejorFacultad = nullptr;
    float mejorPromedio = 0;

    do {
        cout << "Ingrese el nombre de la facultad: ";
        string nombre;
        cin >> nombre;

        Facultad* f = new Facultad(nombre);
        f->generarNotas();
        f->calcularPromedios();
        f->mostrarDatos();

        if (f->getPromedioFacultad() > mejorPromedio) {
            mejorPromedio = f->getPromedioFacultad();
            mejorFacultad = f;
        }

        cout << "¿Desea ingresar otra facultad? (1 = Sí / 0 = No): ";
        cin >> opcion;

    } while (opcion == 1);

    if (mejorFacultad != nullptr) {
        cout << "\nLa mejor facultad fue: " << mejorFacultad->getNombre()
             << " con un promedio de: " << mejorFacultad->getPromedioFacultad() << endl;
    }

    return 0;
}

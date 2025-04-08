#include "Facultad.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

Facultad::Facultad() {
    promedioFacultad = 0;
}

void Facultad::setNombre(string nombre) {
    this->nombre = nombre;
}

string Facultad::getNombre() {
    return nombre;
}

void Facultad::generarNotas() {
    srand(time(0));
    for (int i = 0; i < 5; ++i) {
        notas[i][0] = rand() % 21;  // Primer Parcial (20)
        notas[i][1] = rand() % 26;  // Segundo Parcial (25)
        notas[i][2] = rand() % 36;  // Examen Final (35)
        notas[i][3] = rand() % 21;  // Actividades (20)
    }
}

void Facultad::calcularPromedios() {
    float suma = 0;
    for (int i = 0; i < 5; ++i) {
        float total = 0;
        for (int j = 0; j < 4; ++j) {
            total += notas[i][j];
        }
        promedios[i] = total;
        suma += total;
    }
    promedioFacultad = suma / 5;
}

void Facultad::mostrarDatos() {
    cout << "\nFacultad: " << nombre << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Alumno " << i + 1 << ": ";
        for (int j = 0; j < 4; ++j) {
            cout << setw(4) << notas[i][j] << " ";
        }
        cout << " => Promedio: " << promedios[i] << endl;
    }
    cout << "Promedio de la facultad: " << promedioFacultad << endl;
    cout << "Nota más alta: " << getMayorNota() << ", más baja: " << getMenorNota() << endl;
}

float Facultad::getPromedioFacultad() {
    return promedioFacultad;
}

float Facultad::getMayorNota() {
    float mayor = promedios[0];
    for (int i = 1; i < 5; ++i) {
        if (promedios[i] > mayor) mayor = promedios[i];
    }
    return mayor;
}

float Facultad::getMenorNota() {
    float menor = promedios[0];
    for (int i = 1; i < 5; ++i) {
        if (promedios[i] < menor) menor = promedios[i];
    }
    return menor;
}



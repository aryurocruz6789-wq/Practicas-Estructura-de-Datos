#include <iostream>
#include "Ordenamiento.h"

using namespace std;

Ordenamiento::Ordenamiento(int arreglo[], int tamano) {
    datos = arreglo;
    n = tamano;
    punteros = new int*[n];
    for (int i = 0; i < n; i++) {
        punteros[i] = &datos[i];
    }
}

Ordenamiento::~Ordenamiento() {
    delete[] punteros;
}

void Ordenamiento::intercambiarPunteros(int** a, int** b) {
    int* temporal = *a;
    *a = *b;
    *b = temporal;
}

int Ordenamiento::particionIndirecta(int bajo, int alto) {
    int pivote = *punteros[alto];
    int i = (bajo - 1);

    for (int j = bajo; j <= alto - 1; j++) {
        if (*punteros[j] < pivote) {
            i++;
            intercambiarPunteros(&punteros[i], &punteros[j]);
        }
    }
    intercambiarPunteros(&punteros[i + 1], &punteros[alto]);
    return (i + 1);
}

void Ordenamiento::qSortIndirecto(int bajo, int alto) {
    if (bajo < alto) {
        int pi = particionIndirecta(bajo, alto);
        qSortIndirecto(bajo, pi - 1);
        qSortIndirecto(pi + 1, alto);
    }
}

void Ordenamiento::ordenar() {
    qSortIndirecto(0, n - 1);
}

void Ordenamiento::imprimirIndirecto() {
    for (int i = 0; i < n; i++) {
        cout << *punteros[i] << " ";
    }
    cout << endl;
}

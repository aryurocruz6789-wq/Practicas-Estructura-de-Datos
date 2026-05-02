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

void Ordenamiento::mergeIndirecto(int inicio, int medio, int fin) {
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int** L = new int*[n1];
    int** R = new int*[n2];

    for (int i = 0; i < n1; i++) L[i] = punteros[inicio + i];
    for (int j = 0; j < n2; j++) R[j] = punteros[medio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (*L[i] <= *R[j]) {
            punteros[k] = L[i];
            i++;
        } else {
            punteros[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) { punteros[k] = L[i]; i++; k++; }
    while (j < n2) { punteros[k] = R[j]; j++; k++; }

    delete[] L;
    delete[] R;
}

void Ordenamiento::mSortIndirecto(int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mSortIndirecto(inicio, medio);
        mSortIndirecto(medio + 1, fin);
        mergeIndirecto(inicio, medio, fin);
    }
}

void Ordenamiento::ordenar() {
    mSortIndirecto(0, n - 1);
}

void Ordenamiento::imprimirIndirecto() {
    for (int i = 0; i < n; i++) {
        cout << *punteros[i] << " ";
    }
    cout << endl;
}

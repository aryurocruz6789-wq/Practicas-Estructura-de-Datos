#include <iostream>
#include "Ordenamiento.h"

using namespace std;

Ordenamiento::Ordenamiento(int datos[], int tam) {
    reales = datos;
    n = tam;
    punteros = new int*[n];
    for (int i = 0; i < n; i++) {
        punteros[i] = &reales[i];
    }
}

void Ordenamiento::burbujaIndirecta() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*punteros[j] > *punteros[j + 1]) {
                int* temp = punteros[j];
                punteros[j] = punteros[j + 1];
                punteros[j + 1] = temp;
            }
        }
    }
}

void Ordenamiento::imprimirIndirecto() {
    for (int i = 0; i < n; i++) {
        cout << *punteros[i] << " ";
    }
    cout << endl;
}

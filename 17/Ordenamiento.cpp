#include <iostream>
#include "Ordenamiento.h"

using namespace std;

Ordenamiento::Ordenamiento(int datos[], int tam) {
    arr = datos;
    n = tam;
}

void Ordenamiento::merge(int inicio, int medio, int fin) {
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++) R[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
}

void Ordenamiento::mSort(int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mSort(inicio, medio);
        mSort(medio + 1, fin);
        merge(inicio, medio, fin);
    }
}

void Ordenamiento::ordenar() {
    mSort(0, n - 1);
}

void Ordenamiento::imprimir() {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

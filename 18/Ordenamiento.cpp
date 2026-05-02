#include <iostream>
#include "Ordenamiento.h"

using namespace std;

Ordenamiento::Ordenamiento(int datos[], int tam) {
    arr = datos;
    n = tam;
}

void Ordenamiento::intercambiar(int &a, int &b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int Ordenamiento::particion(int bajo, int alto) {
    int pivote = arr[alto];
    int i = (bajo - 1);

    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] < pivote) {
            i++;
            intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[alto]);
    return (i + 1);
}

void Ordenamiento::qSort(int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(bajo, alto);
        qSort(bajo, pi - 1);
        qSort(pi + 1, alto);
    }
}

void Ordenamiento::ordenar() {
    qSort(0, n - 1);
}

void Ordenamiento::imprimir() {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

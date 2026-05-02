#include <iostream>
#include "Ordenamiento.h"

using namespace std;

Ordenamiento::Ordenamiento(int datos[], int tam) {
    arr = datos;
    n = tam;
}

void Ordenamiento::burbuja() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Ordenamiento::imprimir() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

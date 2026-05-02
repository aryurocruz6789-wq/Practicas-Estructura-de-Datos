#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int datos[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = 8;

    Ordenamiento obj(datos, n);

    cout << " Ejercicio 21: Quick Sort Indirecto " << endl;
    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) cout << datos[i] << " ";
    cout << endl;

    obj.ordenar();

    cout << "Ordenado con punteros: ";
    obj.imprimirIndirecto();

    system("PAUSE");
    return 0;
}

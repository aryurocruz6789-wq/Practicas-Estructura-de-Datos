#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int datos[] = {100, 25, 75, 15, 50};
    int n = 5;

    Ordenamiento obj(datos, n);

    cout << " Ejercicio 20: Merge Sort Indirecto " << endl;
    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) cout << datos[i] << " ";
    cout << endl;

    obj.ordenar();

    cout << "Acceso ordenado con punteros: ";
    obj.imprimirIndirecto();

    system("PAUSE");
    return 0;
}

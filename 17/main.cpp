#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int misDatos[] = {12, 11, 13, 5, 6, 7};
    int tamano = sizeof(misDatos) / sizeof(misDatos[0]);

    cout << "--- Ejercicio 17: Merge Sort (POO) ---" << endl;

    Ordenamiento obj(misDatos, tamano);

    cout << "Arreglo inicial: ";
    obj.imprimir();

    obj.ordenar();

    cout << "Arreglo ordenado: ";
    obj.imprimir();

    system("PAUSE");
    return 0;
}

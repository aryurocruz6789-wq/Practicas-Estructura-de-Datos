#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int datos[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(datos) / sizeof(datos[0]);

    cout << " Ejercicio 18: " << endl;

    Ordenamiento obj(datos, n);

    cout << "Original: ";
    obj.imprimir();

    obj.ordenar();

    cout << "Ordenado: ";
    obj.imprimir();

    system("PAUSE");
    return 0;
}

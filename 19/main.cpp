#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int reales[] = {45, 12, 89, 7, 33};
    int n = 5;

    Ordenamiento obj(reales, n);

    cout << " Ejercicio 19: Burbuja Indirecta " << endl;
    cout << "Valores originales: ";
    for (int i = 0; i < n; i++) cout << reales[i] << " ";
    cout << endl;

    obj.burbujaIndirecta();

    cout << "Valores ordenados punteros: ";
    obj.imprimirIndirecto();

    cout << "Valores en el arreglo original : ";
    for (int i = 0; i < n; i++) cout << reales[i] << " ";
    cout << endl;

    system("PAUSE");
    return 0;
}

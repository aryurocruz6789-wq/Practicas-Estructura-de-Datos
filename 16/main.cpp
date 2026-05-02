#include <iostream>
#include "Ordenamiento.h"

using namespace std;

int main() {
    int datos[] = {50, 20, 40, 10, 30};
    int n = 5;

    Ordenamiento obj(datos, n);

    cout << "Arreglo antes: ";
    obj.imprimir();

    obj.burbuja();

    cout << "Arreglo despues (Burbuja): ";
    obj.imprimir();

    system("PAUSE");
    return 0;
}

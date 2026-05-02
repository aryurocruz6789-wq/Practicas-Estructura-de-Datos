#include <iostream>
#include "Cola.h"

using namespace std;

int main() {
    Cola miCola;
    int opcion, valor;

    do {
        cout << "\n--- MENU INTERACTIVO: COLA ESTATICA ---" << endl;
        cout << "1. Insertar (Llegada de cliente)" << endl;
        cout << "2. Eliminar (Atender cliente)" << endl;
        cout << "3. Ver quien es el siguiente (Frente)" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor del dato: ";
                cin >> valor;
                miCola.insertar(valor);
                break;
            case 2:
                miCola.eliminar();
                break;
            case 3:
                if (miCola.estaVacia()) {
                    cout << "La fila esta vacia." << endl;
                } else {
                    cout << "El primero en la fila es: " << miCola.verFrente() << endl;
                }
                break;
        }
    } while (opcion != 4);

    return 0;
}

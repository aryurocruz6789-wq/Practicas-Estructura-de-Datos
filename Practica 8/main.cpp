#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    ManejadorPila p;
    int op, num;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Apilar" << endl;
        cout << "2. Desapilar" << endl;
        cout << "3. Ver tope" << endl;
        cout << "4. Tamano" << endl;
        cout << "5. Mostrar" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Numero: ";
                cin >> num;
                p.apilar(num);
                break;

            case 2:
                p.desapilar();
                break;

            case 3:
                p.verTope();
                break;

            case 4:
                cout << "Total: " << p.tamano() << endl;
                break;

            case 5:
                p.mostrar();
                break;

            case 0:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while (op != 0);

    return 0;
}

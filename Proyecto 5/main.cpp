#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    Lista miLista;
    int opcion, valor, pos;

    do {
        cout << "\n--- MENU INTERACTIVO: LISTA ESTATICA ---" << endl;
        cout << "1. Insertar en posicion" << endl;
        cout << "2. Eliminar de posicion" << endl;
        cout << "3. Mostrar lista completa" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor a insertar: "; cin >> valor;
                cout << "Ingresa la posicion: ";
                
                cout << "Posicion: "; cin >> pos;
                miLista.insertar(pos, valor);
                break;
            case 2:
                cout << "Posicion a eliminar: "; cin >> pos;
                miLista.eliminar(pos);
                break;
            case 3:
                miLista.mostrar();
                break;
        }
    } while (opcion != 4);

    return 0;
}

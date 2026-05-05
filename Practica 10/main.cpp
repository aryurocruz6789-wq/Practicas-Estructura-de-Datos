#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    ManejadorLista lista;
    int opcion, valor;

    do {
        cout << "\n Ingrese un dato" << endl;
        cout << "1. Insertar al Inicio" << endl;
        cout << "2. Insertar al Final" << endl;
        cout << "3. Eliminar un valor especifico" << endl;
        cout << "4. Mostrar lista" << endl;
        cout << "5. Ver tamano" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Valor numerico: "; cin >> valor;
                lista.insertarInicio(valor);
                break;
            case 2:
                cout << "Valor numerico: "; cin >> valor;
                lista.insertarFinal(valor);
                break;
            case 3:
                cout << "Valor a eliminar: "; cin >> valor;
                lista.eliminarValor(valor);
                break;
            case 4:
                lista.mostrarLista();
                break;
            case 5:
                cout << "Total de nodos: " << lista.obtenerTamano() << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}

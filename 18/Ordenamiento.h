#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* arr;
    int n;

    void intercambiar(int &a, int &b);
    int particion(int bajo, int alto);
    void qSort(int bajo, int alto);

public:
    Ordenamiento(int datos[], int tam);
    void ordenar();
    void imprimir();
};

#endif

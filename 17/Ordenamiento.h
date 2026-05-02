#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* arr;
    int n;

    void merge(int inicio, int medio, int fin);
    void mSort(int inicio, int fin);

public:
    Ordenamiento(int datos[], int tam);
    void ordenar(); 
    void imprimir();
};

#endif

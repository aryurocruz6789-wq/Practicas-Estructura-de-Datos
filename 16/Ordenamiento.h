#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

class Ordenamiento {
private:
    int* arr; 
    int n;   

public:
    Ordenamiento(int datos[], int tam);
    
    void burbuja();
    void imprimir();
};

#endif

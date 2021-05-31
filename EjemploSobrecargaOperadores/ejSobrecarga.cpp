//Codigo ejemplo de Sobrecarga

#include "Cafetera.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Cafetera peque{"Pequena",0.5,1};
    Cafetera mediana{"Mediana",2.5,3};
    Cafetera grande{"Grande",5.0,7};

    cout << peque.toString() << endl;
    cout << mediana.toString() << endl;
    cout << grande.toString() << endl;

    int total = peque + mediana;
    cout << "Las dos primeras tienen capacidad de: " << total << endl;

    return 0;
}

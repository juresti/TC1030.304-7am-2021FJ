//Programa que prueba las clases Electrodomestico y Microondas

#include "Electrodomestico.h"
#include "Microondas.h"
#include <iostream>
using namespace std;

int main()
{
    Electrodomestico elect1{};
    cout << elect1.toString() << endl;
    elect1.setEncendido(1);
    cout << elect1.isEncendido() << endl;

    Microondas micro1{};
    cout << micro1.toString() << endl;
    Microondas micro2{7,"Morado"};
    cout << micro2.toString() << endl;

    cout << micro1.calentadoRapido() << endl;
    micro1.encender();
    cout << micro1.calentadoRapido() << endl;
    
    micro2.encender();
    cout << micro2.isEncendido() << endl;
    micro2.apagar();
    cout << micro2.isEncendido() << endl;
    return 0;
}

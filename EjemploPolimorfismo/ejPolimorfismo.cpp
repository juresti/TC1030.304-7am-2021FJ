//Programa de aplicacion del ejercio de Polimorfismo

#include "Electrodomestico.h"
#include "Microondas.h"
#include "Licuadora.h"
#include <iostream>
using namespace std;


string reporteBonitoElectro(Electrodomestico &elec){
    return "Tu electrodomestico se encuentra en la funcion: " + elec.dimeFuncionActual();
}

int main(int argc, char const *argv[])
{
    Microondas micro1{7,"Rosa"};
    Licuadora licua1{13};

    cout << micro1.toString() << endl;
    cout << licua1.toString() << endl;

    cout << reporteBonitoElectro(micro1) << endl;
    cout << reporteBonitoElectro(licua1) << endl;
    return 0;
}

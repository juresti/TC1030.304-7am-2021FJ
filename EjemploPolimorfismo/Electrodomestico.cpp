// Codigo del ejemplo de Polimorfismo

#include "Electrodomestico.h"
#include <string>
#include <iostream>
using namespace std;

Electrodomestico::Electrodomestico() : encendido{0},funcionActual{"Ninguna"} {}

bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool val) {encendido = val;}
string Electrodomestico::toString(){
    string tmp{""};
    if (isEncendido()) tmp = "Encendido";
    else tmp = "Apagado";
    return "Electrodomestico(" + tmp + "," + funcionActual + ")";
}

string Electrodomestico::dimeFuncionActual(){
    return "La funcion de tu Electrodomestico es: " + funcionActual;
}

void Electrodomestico::cambiaFuncionActual(string fa){
    cout << "Cambio la funcion del Electrodomestico a " << fa << endl;
    funcionActual = fa;
}


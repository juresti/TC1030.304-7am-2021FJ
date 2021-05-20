//Codigo del ejemplo de Herencia

#include"Microondas.h"
#include <string>
#include <iostream>
using namespace std;

Microondas::Microondas() : capacidad{3},color{"Blanco"} {}
Microondas::Microondas(float cap,string col) : capacidad{cap},color{col} {}

string Microondas::calentadoRapido() {
    string tmp{""};
    if(isEncendido()) tmp = "Calentando tu comida";
    else tmp = "Enciende primero el microondas";
    return tmp;
}
void Microondas::encender() {setEncendido(1);}
void Microondas::apagar() {setEncendido(0);}
string Microondas::toString(){
    string tmp{""};
    if(isEncendido()) tmp = "Encendido";
    else tmp = "Apagado";
    return "Microondas("+ tmp + "," + funcionActual + "," + to_string(capacidad) + "," + color + ")";
}

string Microondas::dimeFuncionActual(){
    return "En la pantallita de tu Microondas ves la funcion: " + funcionActual;
}

void Microondas::cambiaFuncionActual(string fa){
    cout << "Cambiando la funcion de tu Microondas a " << fa << endl;
    funcionActual = fa;
}

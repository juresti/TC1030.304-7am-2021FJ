//Codigo del ejemplo en clase de Abstractas

#include "Telefono.h"
#include <string>
#include <iostream>
using namespace std;

Telefono::Telefono(string num) : SistemaComunicacion("Voz y sonido"),encendido{false},numero{num} {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}
bool Telefono::marcar(string num){
    cout << "Marcando el numero: " << num << endl;
    return true;
}

//Codigo del ejemplo de Sobrecarga

#include "Cafetera.h"
#include <string>
using namespace std;

Cafetera::Cafetera(string nom, float cap, int tazas) : nombre{nom},capacidad{cap},tazasXMin{tazas} {}

string Cafetera::toString(){
    return "Cafetera(" + nombre + "," + to_string(capacidad) + "," + to_string(tazasXMin) + ")";
}
    
int operator +(Cafetera &c1,Cafetera &c2){
    return c1.tazasXMin + c2.tazasXMin;
}

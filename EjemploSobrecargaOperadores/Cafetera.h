//Codigo del ejemplo de Sobrecarga

#ifndef CAFETERA_H
#define CAFETERA_H

#include <string>
using namespace std;

class Cafetera{
private:
    float capacidad;
    int tazasXMin;
    string nombre;
public:
    Cafetera(string nom, float cap, int tazas);
    string toString();
    friend int operator +(Cafetera &c1,Cafetera &c2);
}; //Cafetera

#endif

//Codigo del ejercicio en clase de Polimorfismo

#ifndef LICUADORA_H
#define LICUADORA_H

#include "Electrodomestico.h"
#include <string>
using namespace std;

class Licuadora : public Electrodomestico{
private:
    int numVelocidades;
    bool pulsarActivo;
public:
    Licuadora();
    Licuadora(int nv);
    void Licuar();
    void encender();
    void apagar();
    string toString();
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
}; //Licuadora

#endif

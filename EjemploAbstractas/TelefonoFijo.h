//Codigo del ejemplo de Abstractas
#ifndef TELFIJO_H
#define TELFIJO_H

#include "Telefono.h"
class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int nl);
    virtual bool comunicar(); //Hacer concreto el método abstracto
}; //TelefonoFijo

#endif

//Ejemplo de clases Abstractas

#include "TelefonoFijo.h"
#include <iostream>
TelefonoFijo::TelefonoFijo(int nl) : Telefono{"55 1234 2589"},numLineas{nl} {}
    
bool TelefonoFijo::comunicar(){
    cout << "Comunicando tu Telefono Fijo\n";
    return true;
}

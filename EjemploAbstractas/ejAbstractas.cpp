//Codigo de ejemplo clase Abtractas

#include "TelefonoFijo.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    TelefonoFijo telCasa{4};
    telCasa.marcar("55 9856 2347");
    telCasa.comunicar();
    return 0;
}

//Codigo ejemplo clase Abstractas

#include "SistemaComunicacion.h"

SistemaComunicacion::SistemaComunicacion(string tipo) : tipoComunicacion{tipo},comunicando{false} {}

//virtual bool comunicar() = 0; //Abstracto no se implementa
bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool val) {comunicando = val;}

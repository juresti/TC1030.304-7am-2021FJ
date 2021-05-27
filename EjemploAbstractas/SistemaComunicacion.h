//Codigo ejemplo de Abstractas

#ifndef SISTCOM_H
#define SISTCOM_H

#include <string>
using namespace std;
class SistemaComunicacion{
private:
    bool comunicando;
protected:
    string tipoComunicacion;
    SistemaComunicacion(string tipo);
public:
    virtual bool comunicar() = 0; //Abstracto
    bool isComunicando();
    void setComunicando(bool val);
};//SistemaComunicacion

#endif

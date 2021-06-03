//Codigo del ejemplo en clase de Excepciones

#include "Cafetera.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

float pideCapacidad(){
    float cap{0.0};
    bool correcta{false};
    while(!correcta){
        try{
            cout << "Dime la capacidad de la cafetera: ";
            cin >> cap;
            if(cin.fail()) throw runtime_error("Capacidad de la cafetera ingresado erroneamente");
            correcta = true;
        } catch(runtime_error objE){
            cin.clear(); //Limpieza de la bandera de error fail
            cin.ignore(32767,'\n'); //Limpieza del buffer (del dato no usado)
            cout << "ERROR en la captura de la capacidad de la cafetera\n";
            cout << objE.what() << endl;
        }
    }
    return cap;
}

int pideTazas(){
    int tazas{0};
    bool correcta{false};
    while(!correcta){
        try{
            cout << "Tazas por minuto de la cafetera: ";
            cin >> tazas;
            if(cin.fail()) throw runtime_error("Tazas por minuto debe de ser un numero entero");
            correcta = true;
        } catch(runtime_error objE) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "ERROR en la captura de datos\n";
            cout << objE.what() << endl;
        }
    }
    return tazas;
}

int main(int argc, char const *argv[])
{
    cout << "Dime el nombre de la cafetera: ";
    string nom;
    cin >> nom;
    
    float cap = pideCapacidad();
    int tazas = pideTazas();
    
    Cafetera caf1{nom,cap,tazas};
    cout << caf1.toString() << endl;
    return 0;
}

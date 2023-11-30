#include <iostream>
#include <vector>
#include <string>
#ifndef CONTACTO_H
#define CONTACTO_H
using namespace std;
class Contacto {
private:
    string nombre;
    string telefono;
    string genero;

public:
    //constructores
    Contacto();
    Contacto(const string& nombre_, const string& telefono_,const string& genero_);
    //getters
    string getNombre() const;
    string getTelefono() const;
    string getGenero() const;
};
#endif
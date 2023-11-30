#include <iostream>
#include <string>
#include "contacto.h"
using namespace std;

//constructor sin parámetros
Contacto::Contacto(){
  nombre = "";
  telefono = "";
  genero = "";
}
//constructor con parámetros
Contacto::Contacto(const string& nombre_, const string& telefono_,const string& genero_){
  nombre = nombre_;
  telefono = telefono_;
  genero = genero_;
}
//getters
 string Contacto::getNombre() const {
return nombre;
}
string Contacto::getTelefono() const {
return  telefono;
}
string Contacto::getGenero() const {
return  genero;
}
 
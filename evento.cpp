#include <iostream>
#include <vector>
#include <string>
#include "evento.h"
using namespace std;

//constructor sin parámetros
Evento::Evento(){
nombre = "";
fecha = "";
}
//constructor con parámetros
Evento::Evento(const string& nombre_, const string& fecha_){
nombre = nombre_;
fecha = fecha_;
}
//getters
 string Evento::getNombre() const {
return nombre;
}
string Evento::getFecha() const {
return  fecha;
}
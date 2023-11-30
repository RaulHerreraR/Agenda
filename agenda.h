#include <iostream>
#include <vector>
#include <string>
#include "evento.h"
#include "contacto.h"
using namespace std;
class Agenda {
private:
    vector<Contacto> contactos;
    vector<Evento> eventos;
public:
    //declarar funciones
    void agregarContacto(const string& nombre, const string& telefono,const string& genero);
    void agregarEvento(const string& nombre, const string& fecha);
    void mostrarContactos() const;
    void mostrarEventos() const;
    void buscarContacto(const string& genero) const;
};
    

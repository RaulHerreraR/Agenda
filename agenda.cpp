#include <iostream>
#include <vector>
#include <string>
#include "agenda.h"
#include "evento.h"
#include "contacto.h"
using namespace std;
void Agenda::agregarContacto(const string& nombre, const string& telefono, const string& genero) {
    Contacto nuevoContacto(nombre, telefono, genero);
    contactos.push_back(nuevoContacto);
    cout << "Contacto agregado\n";
}

void Agenda::agregarEvento(const string& nombre, const string& fecha) {
    Evento nuevoEvento(nombre, fecha);
    eventos.push_back(nuevoEvento);
    cout << "Evento agregado\n";
}

void Agenda::mostrarContactos() const{
    if (contactos.empty()) {
        cout << "No hay contactos\n";
    } else {
        for (const auto& contacto : contactos) {
            cout << contacto.getNombre() << "---" << contacto.getTelefono() << "\n";
        }
    }
}

void Agenda::mostrarEventos() const{
    if (eventos.empty()) {
        cout << "No hay eventos\n";
    } else {
        cout << "Lista de eventos:\n";
        for (const auto& evento : eventos) {
            cout << evento.getNombre() << "   " << evento.getFecha() << "\n";
        }
    }
}
void Agenda::buscarContacto(const string& genero) const {
    bool contbus = false;
    for (const auto& contacto : contactos) {
        if (contacto.getGenero() == genero) {
            cout << contacto.getNombre() << "---" << contacto.getTelefono() << "\n";
              contbus = true;
            break;
        }
    }

    if (!contbus) {
        cout << "No hay contactos con el genero " << genero << "\n";
    }
}
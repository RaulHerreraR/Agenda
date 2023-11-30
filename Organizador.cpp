#include <iostream>
#include <vector>
#include <string>
#include "contacto.h"
#include "evento.h"
#include "agenda.h"

using namespace std;

int main() {
    Agenda agenda;
    int op;

      do {
        cout << "\n Agenda \n";
        cout << "1. Agregar contacto\n";
        cout << "2. Agregar evento\n";
        cout << "3. Mostrar contactos\n";
        cout << "4. Mostrar eventos\n";
        cout << "5. Buscar contacto (genero)\n";
        cout << "6. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> op;

        switch (op) {
            case 1: {
              string nombre;
              string telefono;
              string genero;
              cout << "Ingrese el nombre del contacto: ";
              cin >> nombre;
              cout << "Ingrese el teléfono del contacto: ";
              cin >> telefono;
              cout << "Hombre o Mujer? ";
              cin >> genero;
              agenda.agregarContacto(nombre, telefono, genero);
              break;
            }
            case 2: {
                string nombre;
                string fecha;
                cout << "Ingrese el nombre del evento: ";
                cin >> nombre;
                cout << "Ingrese la fecha del evento(formato dd/mm/aaaa): ";
                cin >> fecha;
                agenda.agregarEvento(nombre, fecha);
                break;
            }
            case 3:
                agenda.mostrarContactos();
                break;
            case 4:
                agenda.mostrarEventos();
                break;
            case 5: {
                string nombre;
                cout << "Hombre o mujer?: ";
                      cin >> nombre;
                      agenda.buscarContacto(nombre);
                      break;
                  }
                  case 6:
                      cout << "Hasta luego\n";
                      break;
                  default:
                      cout << "Opción inválida\n";
                      break;
              }
          } while (op != 6);

    return 0;
}

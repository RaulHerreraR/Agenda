#include <iostream>
#include <vector>
#include <string>
#ifndef EVENTO_H
#define EVENTO_H
using namespace std;
class Evento {
private:
    string nombre;
    string fecha;

public:
    //constructores
    Evento();
    Evento(const string& nombre_, const string& fecha_);

    string getNombre() const;
    string getFecha() const;
};
#endif
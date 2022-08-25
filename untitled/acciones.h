#include <iostream>
#include <string>
#include "alumno.h"
#include "clase.h"
#include "backend.h"

using namespace std;

#ifndef ACCIONES_H
#define ACCIONES_H


class acciones
{

    bool alumnoExists( int, backend& );
public:
    acciones();
    alumno addAlumno( string & );
    clase addClase( string &, backend& );
};

#endif // ACCIONES_H

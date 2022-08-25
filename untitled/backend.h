#include <vector>
#include "clase.h"
#include "alumno.h"
#include <fstream>
#ifndef BACKEND_H
#define BACKEND_H


class backend
{
    vector<clase> clases;
    vector<alumno> alumnos;
    fstream baseAlumnos;
    fstream baseClases;
    void setup();
public:
    backend();
    ~backend();
    void setClases(vector<clase>);
    void setAlumnos(vector<alumno>);
    void setAlumno(alumno);
    void setClase(clase);
    alumno getAlumno(int);
    void delAlumno(string&);
    void delClase(string&);
};

#endif // BACKEND_H

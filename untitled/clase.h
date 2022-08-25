#include "alumno.h"
#include <vector>
#include <string>
#ifndef CLASE_H
#define CLASE_H


class clase
{
    vector<int> alumnos;
    string nombre;
    int codigo;
public:
    clase(vector<int>,string,int);
    clase();

    void setAlumnos(vector<int>);
    void setNombre(string);
    void setCodigo(int);
    void addAlumno(int);
    vector<int> getAlumnos();
    string getNombre();
    int getCodigo();
    friend std::ostream& operator<<(std::ostream&, const clase&);
    friend std::istream& operator>>(std::istream&, clase&);
};

#endif // CLASE_H

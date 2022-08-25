#include <string>

using namespace std;
#ifndef ALUMNO_H
#define ALUMNO_H


class alumno
{
    string nombre;
    int DNI;
    int legajo;


public:
    alumno();
    alumno(string,int,int);
    void setNombre(string);
    void setDNI(int);
    void setLegajo(int);
    string getNombre();
    int getDNI();
    int getLegajo();

    friend std::ostream& operator<<(std::ostream&, const alumno&);
    friend std::istream& operator>>(std::istream&, alumno&);

    friend std::ofstream& operator<<(std::ofstream&, const alumno&);
    friend std::ifstream& operator>>(std::ifstream&, alumno&);

};

#endif // ALUMNO_H

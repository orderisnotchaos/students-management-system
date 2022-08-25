#include "alumno.h"

alumno::alumno()
{
    nombre="";
    DNI=-1;
    legajo=-1;

}
alumno::alumno(string nombre,int DNI,int legajo){
    this->nombre=nombre;
    this->DNI=DNI;
    this->legajo=legajo;

}

void alumno::setNombre(string nombre){
    this->nombre=nombre;

}

void alumno::setDNI(int DNI){
    this->DNI=DNI;

}

void alumno::setLegajo(int legajo){
    this->legajo=legajo;

}

string alumno::getNombre(){
    return this->nombre;
}

int alumno::getDNI(){
    return this->DNI;

}
int alumno::getLegajo(){
    return this->legajo;

}

std::ostream& operator<<(std::ostream& os, const alumno& s)
{
    os << s.nombre << '\n';
    os << s.DNI<<'\n';
    os<< s.legajo<<'\n';
    return os;
}

 std::istream& operator>>(std::istream& is, alumno& s)
{
    is >> s.nombre >> s.DNI>>s.legajo;
    return is;
}


 /*std::ofstream& operator<<(std::ofstream& os, const alumno& s)
 {
     os << s.nombre<< '\n';
     os << s.DNI<<'\n';
     os<< s.legajo;
     return os;
 }

  std::ifstream& operator>>(std::ifstream& is, alumno& s)
 {
     is >> s.nombre >> s.DNI>>s.legajo;
     return is;
 }
*/

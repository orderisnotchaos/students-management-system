#include "clase.h"
#include <iostream>
#include <vector>
#include "alumno.h"
clase::clase()
{
    codigo=-1;
}

clase::clase(vector<int> alumnos,string nombre, int codigo){
    this->alumnos=alumnos;
    this->nombre=nombre;
    this->codigo=codigo;
}


void clase::setAlumnos(vector<int> alumnos){
    this->alumnos=alumnos;

}
void clase::setNombre(string nombre){
    this->nombre=nombre;

}
void clase::setCodigo(int codigo){
    this->codigo=codigo;
}

vector<int> clase::getAlumnos(){
    return this->alumnos;
}
string clase::getNombre(){
    return this->nombre;

}

int clase::getCodigo(){
    return this->codigo;

}

void clase::addAlumno(int legajo){
    this->alumnos.push_back(legajo);
}

 std::ostream& operator<<(std::ostream& os, const clase& s){
            os<<s.codigo<<'\n';
            os<<s.nombre<<'\n';
            os<<s.alumnos.data();
            return os;

}
 std::istream& operator>>(std::istream& is, clase& s)
{
     s.alumnos.resize(50);
    is >> s.nombre >> s.codigo>>*s.alumnos.data();

    return is;
}


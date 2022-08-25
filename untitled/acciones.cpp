#include "acciones.h"
#include "alumno.h"
#include "backend.h"
#include <iostream>
#include <string>

using namespace std;
acciones::acciones()
{

}
alumno acciones::addAlumno(string &input){

    alumno A;
    cout<<"ingrese el nombre"<<endl;
    cin>>input;
    A.setNombre(input);
    cout<<"ingrese el DNI"<<endl;
    cin>>input;
    A.setDNI(stoi(input));
    cout<<"ingrese el legajo"<<endl;
    cin>>input;
    A.setLegajo(stoi(input));

    return A;
}

clase acciones::addClase(string &input,backend &base ){

    int i=0;
    clase C;
    cout<<"ingrese el nombre"<<endl;
    cin>>input;
    C.setNombre(input);
    cout<<"ingrese el codigo"<<endl;
    cin>>input;
    C.setCodigo(stoi(input));
    cout<<"ingrese el legajo de los alumnos"<<endl;
    cout<<"presione s para terminar"<<endl;
    while(i<30){
        cin>>input;
        if(input=="s") break;
        if(alumnoExists(stoi(input),base)) C.addAlumno(stoi(input));
        else{
            cout<<"el alumno ingresado no pertenece a la facultad"<<endl;
            i--;
        }
        i++;
    }

    return C;


}

bool acciones::alumnoExists(int legajo,backend &base){

    if(base.getAlumno(legajo).getLegajo()!=-1) return true;
    else return false;

}

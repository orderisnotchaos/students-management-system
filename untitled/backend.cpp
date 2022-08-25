#include "backend.h"
#include "clase.h"
#include "alumno.h"
#include <fstream>
#include <iostream>
backend::backend()
{

    setup();
}

backend::~backend(){
    baseAlumnos.open("C:\\users\\andru\\documents\\baseAlumnos.txt",fstream::out);
    baseClases.open("C:\\users\\andru\\documents\\baseClases.txt",fstream::out);
    int i = clases.size();

    while(i!=0){
        i--;
        baseClases<<clases[i];

    }

    baseClases.close();
    i=alumnos.size();
   // baseAlumnos.seekg(fstream::beg);
    while(i!=0){
          i--;
       baseAlumnos<<alumnos[i];

        alumnos.pop_back();

    }

    baseAlumnos.close();

}
void backend::setClases(vector<clase> clases){
    this->clases=clases;
}

void backend::setAlumnos(vector<alumno> alumnos){
    this->alumnos=alumnos;

}
void backend::setAlumno(alumno a){
    this->alumnos.push_back(a);
}

void backend::setClase(clase a){
    this->clases.push_back(a);
}
alumno backend::getAlumno(int legajo){
    int i = 0;
    alumno A;
    while(i<(int)alumnos.size()){
        if(legajo==alumnos[i].getLegajo()) return alumnos[i];
        i++;
    }
    return A;
}

void backend::delAlumno(string& input){
    cout<<"ingrese el legajo del alumno a eliminar:"<<endl;
    cin>>input;
    int legajo=stoi(input);
    int i=0;
    while(i<(int)alumnos.size()){
        if(legajo==alumnos[i].getLegajo()){
            alumnos.erase(alumnos.begin()+i);
            return;
        }
        i++;
    }
    cout<<"el alumno no existe"<<endl;
}

void backend::delClase(string& input){
    cout<<"ingrese el codigo de la clase a eliminar:"<<endl;
    cin>>input;
    int codigo=stoi(input);
    int i=0;
    while(i<(int)alumnos.size()){
        if(codigo==clases[i].getCodigo()){
            clases.erase(clases.begin()+i);
            return;
        }
        i++;
    }
    cout<<"la clase no existe"<<endl;
}
void backend::setup(){
        baseAlumnos.open("C:\\users\\andru\\documents\\baseAlumnos.txt",fstream::in);
        baseClases.open("C:\\users\\andru\\documents\\baseClases.txt",fstream::in);

        if(!baseAlumnos&&!baseClases){

            return;
        }
    while(!baseAlumnos.eof()){


        alumno a;
        baseAlumnos>>a;

        if(a.getDNI()>-1){
            alumnos.push_back(a);

        }else break;

    }

        while(!baseClases.eof()){
               clase a;
                baseClases>>a;
                if(a.getCodigo()>-1){
                    clases.push_back(a);

                }else break;
            }

baseClases.close();
baseAlumnos.close();

}

#include <iostream>
#include "alumno.h"
#include "clase.h"
#include "backend.h"
#include "acciones.h"
#include <fstream>
using namespace std;

int main()
{
        acciones a;
        backend base;
/*///////////////////////////////////////////////inicio\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
    string input;

    cout<<"bienvenido al sistema de gestion de la base de datos de la facultad regional nicolino roche"<<endl;



while(1){
    cout<<"seleccione su accion:"<<endl;
    cout<<"1. agregar alumno"<<endl<<"2. agregar clase"<<endl<<"3.eliminar alumno"<<endl<<"4.eliminar clase"<<endl<<"5. salir"<<endl;
    cin>>input;

    switch(stoi(input)){

        case 1:
            base.setAlumno(a.addAlumno(input));
            break;

        case 2:
            base.setClase(a.addClase(input,base));
            break;
        case 3:
            base.delAlumno(input);
            break;
        case 4:
            base.delClase(input);
            break;
        case 5:
            return 0;

        default:
            cout<<"opcion no existente"<<endl;
            break;
    }
}
    return 0;
}

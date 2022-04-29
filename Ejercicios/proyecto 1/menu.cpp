#include <iostream>
#include "preguntas.h"

using namespace std;

void menu(){    
    bool salir = false;
    
    while (salir == false){
        int opcion = 0;
    
        cout << "bienvenido a quien quiere ser millonario" << endl;
        cout << "****************************************" << endl;
        cout <<"si desea jugar presione: '1'" << endl;
        cout <<"si desea retirarse presione '2'" << endl;
        cin >> opcion;
        system("cls");

        switch (opcion)
        {
        case 1:
            preguntas();
            system("pause");
            break;
        case 2:
            salir = true;
           
        
        default:
            break;
        }
        system("cls");
    }  
}



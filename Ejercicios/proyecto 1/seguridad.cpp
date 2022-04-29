#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3){
        system("cls");

        if (intentos == 3)
        {
            cout << "acceso denegado, por favor contante el administrador"
            << endl;
            return false;
        }  
       
        cout << "ingrese su password: ";
        cin >> password;

        if (password == "admin"){
            system("cls");
            return true;
        }
    
        intentos++;
    }
    
    return false;
}
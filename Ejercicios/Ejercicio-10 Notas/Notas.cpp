#include <iostream>100

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "ingrese la nota que octuvo: ";
    cin >> nota;

    if (nota > 100 || nota < 0){
        cout << " Ingrese una nota entre 0 - 100 ";
        return 0;
    }   

    if (nota >=95 && nota <=100){
        cout << "octuvistes una A ";
    }
    
    if (nota >=85 && nota <=94){
        cout << "octuvistes una B ";
    }
    
    if (nota >=75 && nota <=84){
        cout << "octuvistes una c ";
    }
    if (nota >=64 && nota <=74){
        cout << "octuvistes una d ";
    }
    if (nota >=60 && nota <=64){
        cout << "octuvistes una e ";
    }
    if (nota < 60 ){
        cout << "octuvistes una f ";
    }
    return 0;
}

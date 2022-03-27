#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1 = 0;
    int dado2 = 0;
    int suma = 0;
   
    system("cls");
    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    suma = dado1 + dado2;
       
    if (suma == 7 || suma == 11)
    {   
        cout << "GANASTES!" << endl; 
        cout << "El jugador tiro: "<< dado1 << "+" << dado2 << "="<< suma << endl;
        return 0;
    }   
    if (suma == 2 || suma == 3 || suma == 12)
    {
        cout << "PERDISTES!" << endl;
        cout << "El jugador tiro: "<< dado1 << "+" << dado2 << "="<< suma << endl;
    }         
    else 
    {    
        cout << "CONTINUA!" << endl;
        cout << "El jugador tiro: "<< dado1 << "+" << dado2 << "="<< suma << endl;
        
    }   
   

return 0;        
}


#include <iostream>
#include <stdlib.h>
# include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numerosecreto = 0;
    int minumero = 0;

    srand(time(NULL));

    numerosecreto = rand() % 10 + 1;

    do
    {
        cout << "adivina el numero entre (1 a 10): ";
        cin >> minumero;

        if (numerosecreto < minumero)
        {
            cout << "El numero secreto puede ser Menor" << endl;
        }
        else
        {
            if (numerosecreto > minumero)
            {
                cout << "El numero secreto puede ser Mayor" << endl;
            }
            
        }
    } while (numerosecreto != minumero);

        cout << endl;
        cout << endl;
        cout << "adivinastes!";
    
    return 0;
}

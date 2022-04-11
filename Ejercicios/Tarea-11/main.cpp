#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros [5][5]; 
    int suma = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numeros[i][j] = rand() % 9 + 0;
            suma = suma + numeros[i][j];      
            cout << numeros[i][j] << " ";    
        }
        cout << endl;
    }
    cout << "Total Suma: " << suma;
    return 0;
}

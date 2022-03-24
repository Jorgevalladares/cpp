#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char const *argv[])
{
   double numero = 0;
   double raizcuadrada = sqrt(numero);

   cout << "ingrese un numero para calcular su raiz" << endl;
   cin >> numero;

   raizcuadrada = sqrt(numero);

   cout << "la raiz cuadrada del numero ingresado es: " << raizcuadrada;

    return 0;
}

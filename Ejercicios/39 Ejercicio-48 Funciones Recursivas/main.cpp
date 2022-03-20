#include <iostream>

using namespace std;

int numerosecreto = 7;

void adivinarnumerosecreto(int minumero)
{
    if (minumero == numerosecreto)
    {
        cout << "adivinastes!" << endl;
    }
    else
    {
        cout << "intento fallido con: " << minumero << endl;
        int otronumero = 0;
        cout << "ingrese otro numero: ";
        cin >> otronumero;
        adivinarnumerosecreto(otronumero);
    }
}
int main(int argc, char const *argv[])
{
    adivinarnumerosecreto(5);
    return 0;
}

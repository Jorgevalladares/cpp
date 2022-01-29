#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   int a = 0;
    int b = 0;
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int numero4 = 0;
    cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
    numero1 = a+b;
    numero2 = a-b;
    numero3 = a*b;
    numero4 = a/b;

    cout <<endl;
	cout << "La suma de a+b es: " << numero1 << endl;
	cout << "La resta de a-b es: " << numero2 << endl;
	cout << "La multiplicacion de a*b es: " << numero3 << endl;
	cout << "La divicion de a/b es: " << numero4 << endl;
    
    return 0;
}

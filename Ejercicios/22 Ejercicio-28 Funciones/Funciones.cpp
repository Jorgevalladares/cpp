#include <iostream>

using namespace std;

int sumar() {
    return 5 + 7;
}

string nombrecompleto(){
    return "juan perez";
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreyapellido = nombrecompleto();
    
    cout << resultado;

    cout << endl;
    
    cout << nombreyapellido;

    return 0;
}

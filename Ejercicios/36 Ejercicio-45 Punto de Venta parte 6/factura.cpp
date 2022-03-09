#include <iostream>

using namespace std;

double subtotal;
double total;
double impuesto;
string listaproductos;

void agregarproducto(string descripcion, int cantidad, double precio)
{
    listaproductos = listaproductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
}

void imprimirfactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "productos:" << endl; 
    cout << listaproductos;

    cout << endl;
    cout << "subtotal: " << subtotal << endl;
    cout << "impuesto: " << impuesto << endl;
    cout << "total: " << subtotal + impuesto;
    cout << endl;
    cout << endl;
    system("pause");
}
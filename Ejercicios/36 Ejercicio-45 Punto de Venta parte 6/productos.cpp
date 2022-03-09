#include <iostream>

using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionproducto = 0;

    switch (opcion)
    {
    case 1:
    {    
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - capuccino" << endl;
        cout << "2 - expresso" << endl;
        cout << endl;

        cout << "ingrese una opcion: ";
        cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarproducto("1 expresso - L 30.00", 1, 30);
            break;
        default:
            {   
                cout << "opcion no validad";
                return;
                break;
            }    
        }
     
        cout << endl;
        cout << "producto agregado" << endl << endl;
        system("pause");

        break;
    }    
    case 2:
    {   
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - granita" << endl;
        cout << "2 - te helado" << endl;
        cout << "3 - Smoothie" << endl;
        cout << endl;

        cout << "ingrese una opcion: ";
        cin >> opcionproducto;

        switch (opcionproducto)
         {
        case 1:
            agregarproducto("1 granita - L 45.00", 1, 45);
            break;
        case 2:
            agregarproducto("1 te helado - L 25.00", 1, 25);
            break;
        case 3:
            agregarproducto("1 smoothie - L 35.00", 1, 35);
            break;
        default:
            {   
                cout << "opcion no validad";
                return;
                break;
            }    
        }
     
        cout << endl;
        cout << "producto agregado" << endl << endl;
        system("pause");

        break;
    }    
    case 3:
    {    
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Torta" << endl;
        cout << "2 - Pastel" << endl;
        cout << "3 - Flan" << endl;
        cout << endl;

        cout << "ingrese una opcion: ";
        cin >> opcionproducto;

        switch (opcionproducto)
         {
        case 1:
            agregarproducto("1 Torta - L 10.00", 1, 10);
            break;
        case 2:
            agregarproducto("1 Pastel - L 15.00", 1, 15);
            break;
        case 3:
            agregarproducto("1 Flan - L 20.00", 1, 20);
            break;
        default:
            {   
                cout << "opcion no validad";
                return;
                break;
            }    
        }
     
        cout << endl;
        cout << "producto agregado" << endl << endl;
        system("pause");
        break;
    }
    default:
        break;
    }
}
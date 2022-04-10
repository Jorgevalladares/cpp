#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //string nombres [3] [2];

    //nombres[0][0] = "juan";
    //nombres[0][1] = "perez";

    //nombres[1][0] = "maria";
    //nombres[1][1] = "martinez";

    //nombres[2][0] = "pedro";
    //nombres[2][1] = "jimenez";

    int filas = 4;
    int colucnas = 2;

    string nombres [filas] [colucnas] =
    {
        {"juan", "perez"},
        {"maria", "martinez"},
        {"pedro", "jimenez"},
        {"pedro", "hernandez"}

    };

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < colucnas; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}

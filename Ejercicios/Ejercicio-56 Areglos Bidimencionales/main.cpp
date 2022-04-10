#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres [3] [2];

    nombres[0][0] = "juan";
    nombres[0][1] = "perez";

    nombres[1][0] = "maria";
    nombres[1][1] = "martinez";

    nombres[2][0] = "pedro";
    nombres[2][1] = "jimenez";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}

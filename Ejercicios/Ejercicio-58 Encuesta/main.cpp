#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string alucnos [3];
    string encuesta [3] [2]=
    {
        {"llevara clases el siguiente periodo?", "" },
        {"matriculara l2?", "" },
        {"matriculara l2 con el lic bily?", "" }
        
    };
    int respuestas[3] = { 0, 0, 0 };

    cout << "conteste la encuesta con s o n" << endl << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "ingrese su nombre: ";
        cin >> alucnos[i];
        
        for (int j = 0; j < 3; j++)
        {
            cout << encuesta[j][0] << ": ";
            cin >> encuesta[j][1];

            if (encuesta[j][1] == "s"){
                respuestas[j]++;
            }
            
        }
        cout << endl;
    }
    
    cout << "resumen" << endl;
    cout << "respuestas pregunta 1: " << respuestas[0] << endl;
    cout << "respuestas pregunta 2: " << respuestas[1] << endl;
    cout << "respuestas pregunta 3: " << respuestas[2] << endl;

    return 0;
}

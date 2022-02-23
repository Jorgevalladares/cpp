#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    for (int i = 1; i <= 10; i++)
    {  
        if (i % 2 == 0){
            pares = pares + i;
        }
    
     	if (i % 2 == 1){
            impares = impares + i;
        }
    }
    
    cout << endl;
    cout << "total pares: " << pares << " " << endl; 
    cout << "total impares: " << impares << " " << endl;
	cout << "total suma pares e impares: " << pares+impares << endl;

    return 0;
}
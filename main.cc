#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    float i;

    for ( i = 0; i < 2; i++)
    {       
        cout << "Ingresa un numero" << endl;

        cin >> x;

        if (x % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else{
            cout << "El numero es impar" << endl;
        }
    }
    


    return 0;
}

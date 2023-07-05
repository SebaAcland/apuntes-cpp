
/* -----------------------------------------PUNTEROS----------------------------------------------------------------
Comprobar si un numero es par o impar y señalar la poscion de memoria donde se esta guardando el numero con punteros 
---------------------------------------------------------------------------------------------------------------------*/

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int numero, *dir_numero;

    cout << "digite un nro: ";
    cin >> numero;

    dir_numero = &numero;

    if (*dir_numero % 2 == 0)
    {
        cout << " El numero " << *dir_numero << " es par " << endl;
        cout << " Posicion :" << dir_numero << endl;
    }
    else
    {
        cout << " El numero " << *dir_numero << " es impar " << endl;
        cout << " Posicion :" << dir_numero << endl;
    }

    getchar();
    return 0;
}

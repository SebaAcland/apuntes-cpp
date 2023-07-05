//busqueda binaria
//Se necesita que este ordenada la lista.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato;
    char flag = 'F';

    dato = 4;

    // Algoritmo de busqueda binaria

    inf = 0;
    sup = 5;

    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (numeros[mitad] == dato)
        {
            flag = 'V';
            break;
        }
        if (numeros[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (numeros[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }
    if (flag == 'V')
    {
        cout << "El numero ha sido encontrado en la posicion :" << mitad << endl;
    }
    else
    {
        cout << "El numero no ha sido encontrado";
    }

    getch();
    return 0;
}//--------------------------------------- End main-----------------------------------------------//





// Ordenamiento por insercion.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[] = {3, 2, 4, 1, 5},
        i, pos, aux;
    //Algoritmo de ordenamiento por inserccion;
    for (i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros[i];

        while ((pos > 0) && (numeros[pos - 1] > aux))
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
    }
    cout << "Orden Ascendente: ";
    for (i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
               
    }

    cout << "Orden Descendente: ";
    for (i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }

    getch();
    return 0;

    
    
}

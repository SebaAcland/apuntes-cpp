//---------------------- Ordenamiento por seleccion--------------------------------
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int numero[5] = {5, 4, 3, 2, 1};
    int i, j, aux, min;

    for (i = 0; i < 5; i++)
    {
        min = i;
        for (j = i + 1; j < 5; j++)
        {
            if (numero[j] < numero[min])
                min = j;
        }
        aux = numero[i];
        numero[i] = numero[min];
        numero[min] = aux;
    }
    cout << "Orden Ascendente: ";
    for (i = 0; i < 5; i++)
    {
        cout << numero[i] << " ";
    }
    cout << "\n Orden Descendente : ";
    for (i = 4; i >= 0; i--)
    {
        cout << numero[i] << " ";
    }

    getch();
    return 0;
}

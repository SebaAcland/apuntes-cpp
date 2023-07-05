// Correspondencia entre arrays y punteros.

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros;

    //dir_numeros = &numeros[0]; Otra forma de hacerlo
    dir_numeros = numeros;
    for (int i = 0; i < 5; i++)
    {
        //cout << "Elemento del vector [" << i << "]:" << *dir_numeros++ << endl;
        cout << "Posicion de memoria " << numeros[i] << " es_:" << dir_numeros ++ << endl;
    }

    getchar();
    return 0;
}


//Las direcciones de memoria entre elementos del arreglo hay 4 bytes. (INT)

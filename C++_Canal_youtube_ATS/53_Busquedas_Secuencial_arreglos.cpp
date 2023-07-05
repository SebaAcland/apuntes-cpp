// -----------------------------------Busqueda secuencial------------------------------------------------//
// a[5] = {1,2,3,4,5} >>>> dato = 4;

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int a[] = {3, 4, 1, 2, 5};
    int i, dato;
    char flag = 'F';

    //-------Busqueda secuencial---------
    i = 0;
    dato = 4;
    while ((flag == 'F') && (i < 5))
    {
        if (a == dato)
        {
            flag = 'V';
        }
        i++;
    }
    if (flag == 'F')
    {
        cout << "El numero buscado no existe en el arreglo";
    }
    else if (flag == 'V')
    {
        cout << "El numero buscado existe en el arreglo en la posicion nro :" << i - 1; // <== para quitar el uno en el while i++
    }

    getch();
    return 0;
}

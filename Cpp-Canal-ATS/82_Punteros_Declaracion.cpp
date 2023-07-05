/* Punteros Declaracion de punteros 
&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n.. */

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int num,
        *dir_num;

    num = 20;

    dir_num = &num;

    cout << "Numero " << num << endl;
    cout << "Direccion de mem: " << &num << endl;

    cout << "*Numero " << *dir_num << endl;
    cout << "*Direccion de mem: " << dir_num << endl;

    getchar();
    return 0;
}



/*  Ejercicio 19 : Realice una funcion recursiva que sume los primeros n enteros positivos 
Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia.
 suma (n) = 1;  n+suma(n-1) si n>=1
*/

#include <conio.h>
#include <iostream>
using namespace std;

int sumar(int); //Proto F

int main()
{
    int nElementos;
    do
    {
        cout << "Ingrese el nro elementos : ";
        cin >> nElementos;
    } while (nElementos <= 0);
    cout << "\nLa suma es: " << sumar(nElementos);

    getchar();
    return 0;
}

//Definicion de funciones.
int sumar(int n)
{
    int suma = 0;
    if (n == 1)
    {
        suma = 1; //caso Base
    }
    else
    {
        suma = n + sumar(n - 1); //caso gral
    }
    return suma;
}



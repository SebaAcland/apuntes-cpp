/* Recursividad: 
Un algoritmo recursivo es un algoritmo que expresa la solución de un problema en términos de una llamada a sí mismo. La llamada a sí mismo se conoce como llamada recursiva o recurrente.
En este caso resolveremos un ejemplo para calcular el factorial de un número utilizando recursividad. */

/* Ejercicio --> Factorial de un numero 3!=3*2*1 

factorial(n) = 1   n*factorial(n-1)----> si n>=0;    !0 = 1     */

#include <conio.h>
#include <iostream>
using namespace std;

int factorial(int); //Prototype

int main()
{

    cout<<factorial(3)<<endl;
    

    getchar();
    return 0;
}

//Definicion de Func-
int factorial(int n)
{
    if (n == 0)
    {
        n = 1;
    }
    else
    {
        n = n * factorial(n - 1);
    }
    return n;
}




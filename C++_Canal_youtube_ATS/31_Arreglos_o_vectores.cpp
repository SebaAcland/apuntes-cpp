//1. Escribe un programa que definir un vector de numeros y calcule la suma de sus elementos.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   int num = 10;
    int numero[]={1,2,3,4,5,num}; // Hice una prueba para ver si acepta una variable dentro del vector.
    int suma = 0;

    for (int i = 0; i < 6; i++)
    {
        suma +=numero[i];
    }
    
    cout<<"La suma de los vecotres es = "<<suma<<endl;
    
    getchar();
    return 0;
}
        /* Desarrolle un programa que lea de la entrada estandar un vector de enteros
         y determine el mayor elemento del vector */

#include<iostream>
#include<conio.h>
#define salida std::cout<<
#define entrada std::cin>>

int main()
{
    int numeros[100], n, mayor = 0 ;

    salida"Digite el numero de elementos:";
    entrada n;
    for (int i = 0; i < n; i++)
    {
        salida i+1 <<"Digite numero:";
        entrada numeros[i];

        if (numeros[i] > mayor)   mayor = numeros[i] ;     
        
     }
    salida "\n El mayor elemento del vector :"<<mayor<<std::endl;

     
    getch();
    return 0;
}
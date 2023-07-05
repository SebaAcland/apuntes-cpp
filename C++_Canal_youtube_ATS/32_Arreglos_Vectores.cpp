/* Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar
los numeros del vector con sus indices asociados*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int numero[100], n; //intente declararlo vacio,, al arreglo da error.
    

    cout<<"digite el nro de elementos"; 
    cin>>n;
    
    for (int  i = 0; i < n; i++)
    {
        cout<<"digite un nro:";
        cin>>numero[i]; // guardando los elementos del vector
    }

    for (int i = 0; i < n; i++)
    {
        cout<<i<<"->"<<numero[i];
     
    }
    
   system("pause");
   return 0;
 }
 
/* Escriba un programa que lea los valores enteros hasta qu se introdusca un valor en el rango (20 a 30)
o se introduzaca el valor 0. 
El programa debe entregar la suma de los valores mayores a 0 introducidos*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero,suma = 0;

    
    do
    {
        cout<<"digite un nro:";cin>>numero;
      
        if (numero>0) suma += numero;
                                      
    } while (((numero < 20) || (numero > 30)) && (numero != 0)) ;

    cout<<"\n La suma es: "<<suma<<endl;
    
    system("pause");
    return 0;


}
/* 15. Realize un programa que solicite al usuario que piense un numero entero
entre el 1 y el 100. El programa debe generar un numero aleatoreo en ese mismo
rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor 
al nro aleatorio, asi hasta que lo adivine. Y por ultimo mostrarle el numero 
de intentos que le llevo.

variable = limite_inferior + rand() %(limite_superior +1 - limite_inferior );
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() 
{
    int numero, dato, contador = 0;

    srand(time(NULL));                      //Generar nro aleatorio
    dato = 1 + rand() % (100);               //rand() %(100)--> significa un random de 0 a 100.

    do
    {
        cout<<"Digite un numero"; cin>>numero; //15

        if (numero > dato) cout<<"\n Digite un nro menor \n";
        
        if (numero < dato) cout<<"\n Digite un numero mayor\n";
              
        contador ++;  

    } while ( numero != dato);    

    cout<<"\n FELICIDADES ADIVINASTE";
    system("pause");
    return 0;
        
}
 
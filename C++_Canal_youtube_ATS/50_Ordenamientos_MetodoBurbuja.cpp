/*Es un sencillo algoritmo de ordenamiento. Funciona revizando cada elemento de la lista que va a ser ordenada con el siguente, intercambiandolos de posicion si estan en el orden quivocado. Es necesario revizar varias veces toda la lista hasta que no se necesiten mas intercambios, lo cual significa que la lista esta ordenada.
*/

// 4 5 2 1 3 si numeroActual> numero siguiente --> CAMBIO.

// -------------------------METODO BURBUJA----------------------//
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int numeros[5] = {2, 1, 4, 3, 5};
    int i, j, aux;

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    cout<<"Orden Ascendente: ";
    for ( i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<" ";
    }
       cout<<"Orden Descendente: ";
    for ( i = 4; i >=0; i--)
    {
       cout<<numeros[i]<<" "; 
    }
    

    
    getch();
    return 0;
}

/*  Transmicion de Arreglos    
    Ejemplo :  Hallar el maximo elemento de un arreglo
 */

#include <conio.h>
#include <iostream>
using namespace std;

//-----------------Prototipo de funciones --------------
int hallarMax(int *dirVect, int nElementos);



int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = {3, 5, 8, 4, 1};

    cout << "El mayor elementos es: " << hallarMax(numeros,nElementos);

    getchar();
    return 0;
}

int hallarMax(int *dirVect, int nElementos)
{
    int max = 0;

    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirVect + i) > max)
        {
            max = *(dirVect + i);
        }
    }
    return max;
}


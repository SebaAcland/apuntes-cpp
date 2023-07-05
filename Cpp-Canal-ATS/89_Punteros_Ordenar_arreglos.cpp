/* Ejercicio 5: PEdir al usuario N elemento, almacenarlos en un arreglo dinámico posteriormente ordenar los elemento
en orden ascendente y mostrarlos en pantalla

NOTA: Utilizar cualquier metodo de ordenamiento.

*/

void pedirDatos();
void ordenarArreglo(int *elemento, int nElementos);
void mostrarArreglo(int *elemento, int nElementos);

int nElementos, *elemento;
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{

    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);

    delete[] elemento; // liberar espacio de memoria utilizada para el arreglo dinamico;

    getchar();
    return 0;
}

void pedirDatos()

{
    cout << "Digite el numero de elementos del Arreglo : ";
    cin >> nElementos;
    elemento = new int[nElementos]; //Crear arreglo dinamico

    for (int i = 0; i < nElementos; i++)
    {
        cout << "Digite un numero [" << i << " ]: ";
        cin >> *(elemento + i); // elemento[i]
    }
}

void ordenarArreglo(int *elemento, int nElementos)
{
    int aux;

    // metodo burbuja :

    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos; j++)
        {
            if (*(elemento + j) > *(elemento + j + 1))
            {
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
} //---End ordenarArreglo

void mostrarArreglo(int *elemento, int nElementos)
{
    cout << "Orden Ascendente: ";
    for (int i = 0; i < nElementos; i++)
    {
        cout << *(elemento + i);
    }
} //End Mostrar Arreglo -

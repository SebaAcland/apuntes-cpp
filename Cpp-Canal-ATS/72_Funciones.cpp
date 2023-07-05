// PASO POR PARAMETROS DE PARAMETROS DE TIPO VECTOR//

/* Parametros de la funcion:
void nombreDeFuncion(tipo nombrearreglo[],int tamañArreglo)

Llamada a la funcion:
nombreDeFuncion(nombreArreglo, tamañArreglo); */

//------------Cuadrado de los elemntos del vector--------------//

#include <conio.h>
#include <iostream>
using namespace std;

//Prototipo de func-
void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main()
{

    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};

    cuadrado(vec, TAM);
    muestra(vec, TAM);


    getchar();
    return 0;
}

//Definicion de funciones---

void cuadrado(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << " ";
    }
}
/*
    Ejercicio : Realice un programa que calcule la suma de dos matrices dinamicas 
    REvisar no me funciona!!!!
 */

#include <conio.h>
#include <iostream>
#include <stdlib.h>

// Prototipos de funciones//
void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void mostrarMatrizResultante(int **, int, int);

//Global VAR//

int **puntero_matriz1, **puntero_matriz2, nFilas, nCol;

//------------------------------------------------------------------------------------//
using namespace std;

//-----------------------------------------------------------------------------------//
//                                      MAIN                                         //
//-----------------------------------------------------------------------------------//
int main()
{

    pedirDatos();
    sumarMatrices(puntero_matriz1, puntero_matriz2, nFilas, nCol);
    mostrarMatrizResultante(puntero_matriz2, nFilas, nCol);

    getchar();
    return 0;
}

//-----------------------------------------------------------------------------------//

//---------Declaracion de Funciones ------//

void pedirDatos()
{
    cout << "Digite el numero de Filas : ";
    cin >> nFilas;
    cout << "Digite el numero de Columnas : ";
    cin >> nCol;
    //Reservando memoria para la matriz dinamica

    puntero_matriz1 = new int *[nFilas]; // Reservando memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz1[i] = new int[nCol]; // Reservando memoria para las columnas;
    }

    cout << "\nDigitando los elementos de la  1 matriz : " << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un nro : [" << i << "][" << j << "]:";
            cin >> *(*(puntero_matriz1 + i) + j);
        }
    }

    puntero_matriz2 = new int *[nFilas]; // Reservando memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz2[i] = new int[nCol]; // Reservando memoria para las columnas;
    }
    cout << "\nDigitando los elementos de la  2 matriz : " << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un nro : [" << i << "][" << j << "]:";
            cin >> *(*(puntero_matriz2 + i) + j);
        }
    }
}

void sumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol)
{

    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            *(*(puntero_matriz1 + i) + j) += *(*(puntero_matriz2 + i) + j);
        }
    }
}

void mostrarMatrizResultante(int **puntero_matriz1, int nFilas, int nCol)
{
    cout << "\n\n Imprimiendo matriz resultante :\n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz1 + i) + j); // puntero_matriz[i][j];
        }
        cout << "\n";
    }
}

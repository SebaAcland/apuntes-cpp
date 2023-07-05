/* Matrices dinamicas 
Ejemplo : Rellenar una matriz de N x M y mostrar s contenido

**puntero_matriz -> *puntero_fila --> [int]   [int]    [int]
                    *puntero_fila --> [int]   [int]    [int]
                    *puntero_fila --> [int]   [int]    [int]
 */

#include <conio.h>
#include <iostream>
using namespace std;
// Prototipo de funciones
void pedirDatos();
void mostrarMatriz(int **, int, int);
int **puntero_matriz,
    nFilas,
    nCol;

int main()
{
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);
    // Liberar la memoria que hemos utilizado en la matriz . 
    
    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;

    
    
    getchar();
    return 0;
}

void pedirDatos()
{
    cout << "Digite el numero de Filas : ";
    cin >> nFilas;
    cout << "Digite el numero de Columnas";
    cin >> nCol;
    //Reservando memoria para la matriz dinamica

    puntero_matriz = new int *[nFilas]; // Reservando memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol]; // Reservando memoria para las columnas;
    }

    cout << "\nDigitando numeros de la matriz : " << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un nro : [" << i << "][" << j << "]:";
            cin  >> *(*(puntero_matriz + i)+j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol)
{
    cout << "\n\n Imprimiendo matriz:\n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j); // puntero_matriz[i][j];
        }
        cout << "\n";
    }
}



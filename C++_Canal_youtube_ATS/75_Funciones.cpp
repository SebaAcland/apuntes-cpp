//PASO DE PARAMETROS DE TIPO MATRIZ.

//Elevar al cuadrado todos los elementos de la matriz.

#include <conio.h>
#include <iostream>
using namespace std;

//-Prototipo de funciones.//
void mostrarMatriz(int m[][3], int, int); //C++ Obliga a poner el numero de columnas. Las filas no.
void calcularCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int nfilas, int mcol);

int main()
{
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1, 2, 3},
                           {4, 5, 6}};

    mostrarMatriz(m, NFILAS, NCOL);
    calcularCuadrado(m, NFILAS, NCOL);
    mostrarMatrizElevada(m, NFILAS, NCOL);

    getchar();
    return 0;
}

//Declaracion de funciones//
void mostrarMatriz(int m[][3], int nfilas, int ncol)
{
    cout << "Mostrando matriz original:\n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}
void calcularCuadrado(int m[][3], int nfilas, int mcol)
{

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < mcol; j++)
        {
            m[i][j] *= m[i][j];
        }
        cout << "\n";
    }
}
void mostrarMatrizElevada(int m[][3], int nfilas, int mcol)
{
    cout << "Mostrando matriz elevada\n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < mcol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

//Determinar si una matriz es simetrica.

#include <conio.h>
#include <iostream>
using namespace std;

//Prototipos de Funciones//
void pedirDatos();
void comprobarSimetria(int m[][100], int nfilasF, int ncolumF);


int m[100][100], nfilas, ncolum;

int main()
{
    pedirDatos();
    comprobarSimetria(m,nfilas, ncolum);

    getchar();
    return 0;
}

//Definicion de Funciones//
void pedirDatos()
{
    cout << "Digite el numero de filas : ";
    cin >> nfilas;
    cout << "Digite el numero de columnas :";
    cin >> ncolum;
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolum; j++)
        {
            cout << "Digite un numero[" << i << "][" << j << "]:";
            cin >> m[i][j];
        }
    }
}

void comprobarSimetria(int m[][100], int nfilasF, int ncolumF)
{
    int cont = 0;

    if (nfilasF == ncolumF)
    {
        for (int i = 0; i < nfilasF; i++)
        {
            for (int j = 0; j < ncolumF; j++)
            {
                if (m[i][j] == m[j][i])
                {
                    cont++;
                }
            }
        }
    }
    if (cont == (nfilasF * ncolumF))
    {
        cout<< "La matriz es simetrica!";
    }
    else
    {
        cout << "La matriz no es simetrica";
    }
}

/* tipo nombre[nfilas][ncolumnas];

============            int numeros[2][3] = {1,2,3, 4,5,6} ;
1  | 2 | 3 |            
============            int numeros[2][3] = {{1,2,3},{4,5,6}};
4  | 5 | 6 |            
============            int numeros[2][3] =  {  1,2,3,
                                                4,5,6   };            */

/* Hacer un programa para rellenar una matriz pidiendo al usario el numero 
de filas y columnas, posteriormente mostrar la matriz en pantalla*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numeros[100][100];
    int filas, columnas;
    cout << "digite el numero de filas: ";
    cin >> filas;
    cout << "digite el numero de columnas: ";
    cin >> columnas;

    //---Almacenando datos en la matriz---//

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Digite un numero[" << i << "][" << j << "]";
            cin >> numeros[i][j];
        }
    }

    //--------Mostrando la matriz----------//

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j];
        }
        cout << "\n";
    }

    getch();
    return 0;
} //----------------------------------End main----------------------------------------//

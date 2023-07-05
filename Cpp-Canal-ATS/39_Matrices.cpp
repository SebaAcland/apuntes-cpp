/* Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

|8 1 3|      |8 1 3|  
|1 7 4|  --> |1 7 4|     
|3 4 9|      |3 4 9|  
*/

#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros [100][100],
        columnas,
        filas;
        
    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Digite un numero ["<<i<<"] ["<<j<<"] : ";
            cin>>numeros[i][j];
        }
    }

    bool band=false;

    if (filas == columnas){
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                if (numeros[i][j]==numeros[j][i]){
                    band=true;
                }
            }
        }
    }
    
    if (band) cout<<"La matriz es simetrica";  // cuando es una sentencia sola no pongo {}.
    else      cout<<"La matriz no es simetrica";  

      
    getch();
    return 0;

}
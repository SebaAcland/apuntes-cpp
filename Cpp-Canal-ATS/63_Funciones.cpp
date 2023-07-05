/*      tipo nombre (tipo var1,tipo var2,.....tipo varn)
{
    conjunto de instrucciones
}
*/

//Ejemplo encontrar el mayor de los dos numeros////

#include <iostream>
#include <conio.h>

using namespace std;
//-----------------------------------------------------------------------------------------------------
//Prototipo de Funciones
int encontrarMAx(int x, int y);



//--------------------------------------------MAIN----------------------------------------------------
int main()
{

    int n1, n2, mayor;

    cout << "Digite dos numeros: ";
    cin >> n1 >> n2;

    mayor = encontrarMAx(n1, n2); // devuelve un return por eso hay que guardarlo en una variable.

    cout << "El mayor de los 2 numeros es: " << mayor << endl;

    getch();
    return 0;
}

//--------------------------------------------------------------------------------------------------
//-----Definicion de la Funciones------//

int encontrarMAx(int x, int y)
{
    int numMax;

    if (x > y)
        numMax = x;
    if (y > x)
        numMax = y;

    return numMax;
}
/* Ejercicio 3 : Escriba una funcion nombrada funpot() que eleve un numero entero que se le trasmita a una ppotencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera ser el segundo valor transmitido a la funcion */

#include <iostream>
#include <conio.h>

using namespace std;

//-----PROTOTIPOS FUNC----//

void pedirDatos();
void funpot(int x, int y);

//-------GLOBAL VAR--------//
int numero,
    exponente;

//==========MAIN===========//
int main()
{
    pedirDatos();
    funpot(numero, exponente);

    getch();
    return 0;
}

//----------DEFINICION FUNCIONES---------//

void pedirDatos()
{
    cout << "Digite un número: ";
    cin >> numero;
    cout << "Digite el exponente de elevacion: ";
    cin >> exponente;
}
void funpot(int x, int y)
{
    long resultado = 1;
    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }
    cout << "EL resultado es :" << resultado << endl;
}

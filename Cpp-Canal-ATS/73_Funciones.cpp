/*  Ejercicio 11: REalice una funcion q tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos*/

#include <conio.h>
#include <iostream>
using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

//.--------------------------------------------------------------------------------------------------------------------//
int main()
{
    pedirDatos();

    cout << "\nLa suma de los elementos del vectores:" << calcularSuma(vec, tam) << endl;

    getchar();
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------//

//Definicion de Funciones//
void pedirDatos()
{
    cout << "Digite el numero de elementos del vector: ";
    cin >> tam;
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}
int calcularSuma(int vec[], int tam)
{
    int suma = 0; //Nota ---> no inicialice variable y me daba cualquier valor.

    for (int i = 0; i < tam; i++)
    {
        suma += vec[i]; //Suma iterativa.
    }
    return suma;
}

/* Ejercicio 13: Realiza una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector
*/

#include <conio.h>
#include <iostream>
using namespace std;

void pedirNumeros();
void cambiarSigno(int vectF[], int tamF);
void mostrarVector(int VectF[], int tamF);

int vect[100],
    tam;
//--------------------------------------MAIN---------------------------------------------------------//
int main()
{
    pedirNumeros();
    cambiarSigno(vect, tam);
    mostrarVector(vect, tam);

    getchar();
    return 0;
}
//-------------------------------------------------------------------------------------------------//
//Definicion de Funciones

void pedirNumeros()
{
    cout << "Digite el tamaño del vector: ";
    cin >> tam;
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero : ";
        cin >> vect[i];
    }
}

void cambiarSigno(int vectF[], int tamF)
{
    for (int i = 0; i < tamF; i++)
    {
        vectF[i] *= -1;
    }
}
void mostrarVector(int vectF[], int tamF)
{
    cout << "\nMostrando los datos con signo cambiado  : ";
    for (int i = 0; i < tamF; i++)
    {
        cout << vectF[i] << "  ";
    }
}
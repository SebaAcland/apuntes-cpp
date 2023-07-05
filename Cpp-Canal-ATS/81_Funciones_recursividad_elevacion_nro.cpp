/* ejercicio 21: Escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual q cero, x^y

potencia(x,y)=x        x*potencia(x,y-1) ---> y>=1     */

#include <conio.h>
#include <iostream>


using namespace std;

//Prototipo de funcion
int potencia(int x, int y);

int main()
{

    int base,
        exponente;
    //Pedir datos al usuario//
    cout << "digite la base: ";
    cin >> base;
    cout << "digite el exponente";
    cin >> exponente;

    cout<<"\nPotencia de "<<base<<" elevado a la "<<exponente<<" es :"<<potencia(base,exponente)<<endl;
  


    getchar();
    return 0;
}

//Definicion de funcion
int potencia(int x, int y)
{
    int pot = 0;

     pot = (y == 1) ? x : x * potencia(x, y - 1); // Operador ternario;
    return pot;
}


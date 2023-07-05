#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{

    char cad[] = "123";
    char cad2[] = "123.45";

    int numero;
    float numeroFloat;

    numero = atoi(cad); //Convierte de string a int
    cout << numero << endl;

    numeroFloat = atof(cad2); // Convierte de strinf a float.
    cout << numeroFloat << endl;

    getch();
    return 0;
}

//Transformar una cadena a numeros - Funcion atoi() y atof()--
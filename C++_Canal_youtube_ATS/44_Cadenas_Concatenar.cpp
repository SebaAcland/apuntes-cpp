// Añadir o concatenar una cadena con otra - Funcion strcat().

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char cad1[] = "Esto es una cadena",
         cad2[] = "de ejemplo",
         cad3[30];

    strcpy(cad3, cad1); // "Esto es una cadena"
    strcat(cad3, cad2); // "Esto es una cadena de ejemplo"

    cout << cad3 << endl;

    getch();
    return 0;
}

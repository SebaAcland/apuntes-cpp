/* Crear una cadena que tenga la siguiente frase " Hola que tal",
Luego vrear otra cadena para preguntarle al usuario su nombre. Mostrar "Hola que tal + (nombre)".*/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char cad1[] = "Hola que tal ",
         usuario[30],
         cad3[60];

    cout << "Ingrese nombre: ";
    cin>>usuario;

    strcpy(cad3, cad1);
    strcat(cad3, usuario);

    cout << cad3 << endl;

    getch();
    return 0;
}


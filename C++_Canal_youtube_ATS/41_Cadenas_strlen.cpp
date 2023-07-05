//Longitid de una cadena de caracteres .  Funcion strlen();

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[] = "Hola que talco0";
    //int longitud = 0;

    int longitud = strlen(palabra); //Devuelve un entero con el largo de la cadena,
    cout << "Numero de elementos de la cadena es: " << longitud << endl;

    getch();
    return 0;
}
// Copiar el contenido de una cadena a tra . Funcion Strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char nombre[] = "Sebastian Acland Benitez";
    char nombre2[10];
    //const int i= 10; // Esto es una prueba que hice .la unica forma de declaralo con variable fue esta
    //char nombre 45[i];
    
    char nombre44[strlen(nombre)];
    



    strcpy(nombre2, nombre);
    strcpy(nombre44,nombre); //nombre2 <== nombre

    cout << nombre44 << endl;
    cout << nombre2 << endl;
    getch();
    return 0;
}

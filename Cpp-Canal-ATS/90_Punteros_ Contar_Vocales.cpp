/*
Ejercicio 7 : Pedir su nombre al usuario y devolver el numero de vocales que hay en dicho nombre.

nombreUsuario es lo mismo que &nombreUsuario[0];

*/

// Prototipo de funciones ..
void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    pedirDatos();
    cout << "\nEl numero de Vocales del nombre es :" << contandoVocales(nombreUsuario) << endl;


    getchar();
    return 0;
}

void pedirDatos()
{
    cout << "Digite su nombre : ";
    cin.getline(nombreUsuario, 30, '\n');
    strupr(nombreUsuario); //Transformando a MAYUSCULA EL NOMBRE
}

int contandoVocales(char *nombre)
{
    int cont = 0;

    while (*nombre) // mientra no sea nulo '\0'
    {
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cont++;
        }

        nombre++;
    }
    return cont;
}

/*
Punteros a estructuras
 */

#include <conio.h>
#include <iostream>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
} persona, *puntero_persona = &persona;

void pedirDatos();
void mostrarDatos( Persona *);

int main()
{

pedirDatos();
mostrarDatos(puntero_persona);

    getchar();
    return 0;
}

void pedirDatos()
{

    cout << "Digite su nombre :";
    cin.getline(puntero_persona->nombre, 30, '\n'); // -> arrow puntero a persona.nombre-
    cout << "Digite su Edad :";
    cin >> puntero_persona->edad;
}

void mostrarDatos( Persona *){

    cout << "\n Su nombre " << puntero_persona->nombre<<endl;
    cout << "\n Su Edad   " << puntero_persona->edad<<endl;

}


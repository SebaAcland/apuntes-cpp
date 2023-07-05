/*
Clases en C++
NOTA:  El constructor de la clase debe de tener el mismo nombre que la CLASE!!!!!
 */

#include <conio.h>
#include <iostream>
using namespace std;

class Persona
{
private: //Atributos
    int edad;
    string Nombre;

public:                   //Metodos
    Persona(int, string); //Constructor de la clase "Debe tener el mismo nombre de la clase"
    void leer();
    void correr();
};

Persona::Persona(int _edad, string _Nombre) //Inicializo Constructor
{
    edad = _edad;
    Nombre = _Nombre;
}

void Persona::leer()
{
    cout << "Soy " << Nombre << " y estoy leyendo un libro" << endl;
}
void Persona::correr()
{
    cout << "Soy " << Nombre << " y estoy corriendo una maraton" << endl;
}

int main()
{
    Persona p1 = Persona(20, "Alejandro");
    p1.leer();
    Persona p2(10, "Maria");
    p2.leer();
    p2.correr();
    Persona p3(23, "Juan");
    p3.correr();
    p3.leer();

    getchar();
    return 0;
}

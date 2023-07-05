/* Destructor de Objetos_ */

#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string); //Constructor
    ~Perro();              //Destructor
    void mostrarDatos();
    void jugar();
};

//Constructor
Perro::Perro(string _Nombre, string _raza)
{
    nombre = _Nombre;
    raza = _raza;
}

//Destructor
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout << "Nombre : " << nombre << endl;
    cout << "Raza : " << raza << endl;
}
void Perro::jugar()
{
    cout << "Hola Estoy jugando" << endl;
}
int main()
{
    Perro perro1("Toby", "Labrador");
    perro1.mostrarDatos();
    perro1.jugar();
    perro1.~Perro(); // Destruyendo al objeto.
    //perro1.mostrarDatos();

    getchar();
    return 0;
}

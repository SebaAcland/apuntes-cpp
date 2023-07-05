/* Ejercicio 4: Crear un programa en C++ que tenga la siguiente jerarquia de clases:
Animal(clase padre) -> Humano(clase hija) -> Perro (clase hija), y hacer polimorfismo con el metodo comer
 */

#include <conio.h>
#include <iostream>
using namespace std;
//-----------------------------------------------------------------------------//
class Animal
{
private:
    int edad;

public:
    Animal(int);
    virtual void comer();
};
//--------------------------------------------------------------------------------//
class Humano : public Animal
{
private:
    string nombre;

public:
    Humano(int, string);
    void comer();
};
//---------------------------------------------------------------------------------//
class perro : public Animal
{
private:
    string nombre, raza;

public:
    perro(int, string, string);
    void comer();
};
//----------------------------------------------------------------------------------//
Animal::Animal(int _edad)
{
    edad = _edad;
}

void Animal::comer()
{
    cout << "Yo como";
}
//----------------------------------------------------------------------------------//
Humano::Humano(int _edad, string _nombre) : Animal(_edad)
{
    nombre = _nombre;
}

void Humano::comer()
{
    Animal::comer();
    cout << "en una mesa sentado en su silla";
}

//----------------------------------------------------------------------------------//
perro::perro(int _edad, string _nombre, string _raza) : Animal(_edad)
{
    nombre = _nombre;
    raza = _raza;
}

void perro::comer()
{
    Animal::comer();
    cout << "Como en el suelo en un plato";
}

//----------------------------------------------------------------------------------//

int main()
{   
    Animal *animales[2];
    animales[0] = new Perro(5,"bobby","Pastor Aleman");
    animales[1] = new Humano(18,"Juan");


    animales[0]->comer();
    animales[1]->comer();


    getchar();
    return 0;
}

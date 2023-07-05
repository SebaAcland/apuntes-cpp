/* Polimosrfismo
Nota:
Si quito el virtual solo mostrara el metodo mostrar de la clase padre y no agrega por ejemplo:
COUT << "Notal final:" notafinal << endl --> de la clase hijo Alumno


 */

#include <conio.h>
#include <iostream>
using namespace std;
//-------------------------------------------------------------------------------------------
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    virtual void mostrar(); // Virtual significa que es una funcion de polimorfismo - (Solo se escribe en la clase padre)
};
//--------------------------------------------------------------------------------------------
class Alumno : public Persona
{
private:
    float notaFinal;

public:
    Alumno(string, int, float);
    void mostrar();
};
//---------------------------------------------------------------------------------------------
class Profesor : public Persona
{
private:
    string materia;

public:
    Profesor(string, int, string);
    void mostrar();
};

//---------------------------------------Constructor de Persona--------------------------------
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

//--------------------------------------Metodo mostrar----------------------------------------------
void Persona::mostrar()
{
    cout << "Nombre :" << nombre << endl;
    cout << "Edad :" << edad << endl;
}

//-----------------------------------Constructor Alumno------------------------------------------
Alumno::Alumno(string _nombre, int _edad, float _notafinal) : Persona(_nombre, _edad)
{
    notaFinal = _notafinal;
}
void Alumno::mostrar()
{
    Persona::mostrar();
    cout << "Nota Final :" << notaFinal << endl;
}

//-----------------------Constructor de Profesor----------------------------------------------
Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad)
{
    materia = _materia;
}
void Profesor::mostrar()
{
    Persona::mostrar();
    cout << "Materia :" << materia << endl;
}
//_------------------------------------------------------------------------------------------------
int main()
{
    Persona *vector[3];
    vector[0] = new Alumno("Alejandro", 20, 18.9);
    vector[1] = new Alumno("MAria", 19, 15.5);
    vector[2] = new Profesor("Jose", 25, "Algoritmos");

    vector[0]->mostrar(); //Es igual que punteros a estructuras.
    cout << "\n";
    vector[1]->mostrar();
    cout << "\n";
    vector[2]->mostrar();
    cout << "\n";

    getchar();
    return 0;
}



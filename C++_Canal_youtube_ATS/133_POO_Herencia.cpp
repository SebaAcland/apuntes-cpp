/* Herencia en POO */

#include <conio.h>
#include <iostream>
using namespace std;

class Persona
{
private: //Atributos
    string nombre;
    int edad;

public:
    Persona(string, int); //Constructor
    void mostrarPersona();
};

// Clase alumno hereda de persona lo public
class Alumno : public Persona
{
private:
    string codigoAlumno;
    float notaFinal;

public:
    Alumno(string, int, string, float); //Constructor de la clase alumno Respeta el orden, 1 string nombre persona 2 int edad, y 3 codigoalumno, float nota
    void mostrarAlumno();
};

// Constructor de la Persona de la clase Padre
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
//Lo que es de persona yo ya lo tengo : Persona(_nombre,_edad);
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona() //Metodo
{
    cout << "nombre :" << nombre << endl;
    cout << "Edad :" << edad << endl;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout << "Codigo Alumno : " << codigoAlumno << endl;
    cout << " Nota Final : " << notaFinal << endl;
}
//################################### MAIN ####################################################
int main()
{
    Alumno alumno1("Sebastian",40,"cj11123",12.0);
    alumno1.mostrarAlumno();

    getchar();
    return 0;
}

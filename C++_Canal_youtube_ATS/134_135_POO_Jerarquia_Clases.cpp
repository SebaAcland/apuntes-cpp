/* https://www.youtube.com/watch?v=JqxPZOu7hSU&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=135
Ejercicio 3: Realice un programa en c++ , de tal manera que se contruya una solucion para la jerarquia(herencia) de clases mostrada en la siguiente figura.
                       PERSONA
                     *         *
             Empleado       EStudiante
                                 *                                                  
                            Universitario      
 */

#include <conio.h>
#include <iostream>
using namespace std;
//---------------------------------------------------Class Persona------------------------------------------------
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int); //Constructor
    void mostrarPersona();
};
//--------------------------------------------------- Class Empleado--------------------------------------------
class Empleado : public Persona
{
private:
    float sueldo;

public:
    Empleado(string, int, float); //String he int vienen de class Persona;
    void mostrarEmpleado();
};
//--------------------------------------------------- Class Estudiante--------------------------------------------
class Estudiante : public Persona
{
private:
    float notaFinal;

public:
    Estudiante(string, int, float); //String he int vienen de class Persona;
    void mostrarEstudiante();
};
//--------------------------------------------------- Class Universitario --------------------------------------------
class Universitario : public Estudiante
{
private:
    string carrera;

public:
    Universitario(string, int, float, string); //String he int vienen de class Persona y float de Estudiante
    void mostrarUniversitario();
};
//------------------------------------------------------Persona--------------------------------------------------------
Persona ::Persona(string _nombre, int _edad) //Constructor de la clase Persona(Padre)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona()
{
    cout << "Nombre :" << nombre << endl;
    cout << "Edad :" << edad << endl;
}
//------------------------------------------------------Empleado--------------------------------------------------------//
Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad) //Constructor clase empleado
{
    sueldo = _sueldo;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout << "Sueldo :" << sueldo << endl;
}

//------------------------------------------------------Estudiante--------------------------------------------------------//
Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad) //Constructor clase Estudiante
{
    notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout << "Nota final :" << notaFinal << endl;
}
//------------------------------------------------------Universitario--------------------------------------------------------//
Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante(_nombre, _edad, _notaFinal) //Constructor clase Universitario
{
    carrera = _carrera;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout << "Carrera :" << carrera << endl;
}
//_------------------------------------------------------------------------------------------------------------------------------//
int main()
{

    Empleado empleado1("Carlos", 35, 1300);
    Cout << "Empleado : " << endl;
    empleado1.mostrarEmpleado();
    cout << "\n";

    Estudiante estudiante1("Alejandro", 20, 14.7);
    Cout << "Estudiante : " << endl;
    estudiante1.mostrarEstudiante();
    cout << "\n";

    Universitario univer1("Sebastian", 40, 12.4, "Informatica");
    Cout << "Universitario : " << endl;
    univer1.mostrarUniversitario();
    cout << "\n";

    getchar();
    return 0;
}

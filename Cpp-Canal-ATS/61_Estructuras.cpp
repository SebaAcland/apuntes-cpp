/* Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
nota1, nota2, nota3, y otra llamada alumno que tendra los siguientes miembros:
Nombre, sexo, edad; Hacer que la estructura promedio este anidada en la estructura alumno, luego pedor todos los datos del alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos anidados incluidos el promedio*/

#include <iostream>
#include <conio.h>

using namespace std;

struct promedio
{
    int nota1, nota2, nota3; //miembros
};

struct alumno
{
    char Nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
} alumno1;

int main()
{
    int promedio_alumno;

    cout << "Digite su nombre :";
    cin.getline(alumno1.Nombre, 20, '\n');
    cout << "Digit su sexo :";
    cin.getline(alumno1.sexo, 20, '\n');
    cout << "Digit su edad :";
    cin >> alumno1.edad;

    cout << "\n Notas del Alumno \n";
    cout << "Nota 1";
    cin >> alumno1.prom.nota1;
    cout << "Nota 2";
    cin >> alumno1.prom.nota2;
    cout << "Nota 3";
    cin >> alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

    cout << "\n Datos del Alumno \n";
    cout << "Nombre : " << alumno1.Nombre << endl;
    cout << "Sexo : " << alumno1.sexo << endl;
    cout << "Promedio : " << promedio_alumno << endl;



    getchar();
    return 0;
}


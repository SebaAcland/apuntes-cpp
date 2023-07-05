/* Ejercicio 11: Hacer una estructura llamada alumno, en la cual se trendan los siguientes campos: 
    Nombre, edad , promediom pedir datos al usuario para 3 alumnos, comprobar caul de los 3 tiene el mejor
    rendimiento y posteriormente imprimir los datos del alumno.
    NOTA: Usar punteros a esructura.
 */

#include <conio.h>
#include <iostream>
using namespace std;

struct Alumno
{
    char Nombre[30];
    int edad;
    float promedio;

} alumno[3], *puntero_alumno = alumno; // esto es lo mismo que alumno[0] ; 

//------  Prototipo de funciones-------//

void pedirDatos();
void calcularMejorPromedio(Alumno *);
//------------------------------------------------------------------------------------------//
int main()
{
    pedirDatos();
    calcularMejorPromedio(puntero_alumno);

    getchar();
    return 0;
}
//----------------------------------------------------------------------------------------//
//----------------------------Declaracion de Funciones------------------------------------//
void pedirDatos()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout << "Digite su nombre : ";
        cin.getline((puntero_alumno + i)->Nombre, 30, '\n');
        cout << "Digite su edad : ";
        cin >> (puntero_alumno + i)->edad;
        cout << "Digite su promedio :";
        cin >> (puntero_alumno + i)->promedio;
        cout << "\n";
    }
} //End pedirDatos()

void calcularMejorPromedio(Alumno *puntero_alumno_Funcion)
{

    float mayor = 0.0;
    int pos = 0;
    for (int i = 0; i < 3; i++)
    {
        if ((puntero_alumno_Funcion + i)->promedio > mayor)
        {
            mayor = (puntero_alumno_Funcion + i)->promedio;
            pos = i;
        }
    }

    // imprimir los datos del alumno con mayor promedio

    cout << "\n El alumno con mejor promedio es: \n";
    cout << "Nombre : " << (puntero_alumno_Funcion + pos)->Nombre << endl;
    cout << "Edad : " << (puntero_alumno_Funcion + pos)->edad << endl;
    cout << "Promedio :" << (puntero_alumno_Funcion + pos)->promedio << endl;
}

// Estructura anidadas C++

#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion
{

    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct info_empleado
{
    char nombre[30];
    struct info_direccion dir_empleado; //Estructura anidada.
    double salario;
} Empleado[2]; // Aqui creo las variables del tipo empleado, 2 empleados.

// Empleado[0].dir_empleado.direccion

int main()
{
    

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); // Limpiar el Buffer sino no funciona-! ingresar el segundo Empleado
        cout << "Digite su nombre: ";
        cin.getline(Empleado[i].nombre, 20, "\n");
        cout << "Digite su direccion: ";
        cin.getline(Empleado[i].dir_empleado, 30, "\n");
        cout << "Ciudad: ";
        cin.getline(Empleado[i].dir_empleado.ciudad, 20, "\n");
        cout << "Provincia: ";
        cin.getline(Empleado[i].dir_empleado.provincia, 20, "\n");
        cout << "Salario :";
        cin >> Empleado[i].salario;
        cout << "\n";
    }

    //Imprimo los datos.
    for (int i = 0; i < 2; i++)
    {
        cout << "Nombre de Empleado :" << Empleado[i].nombre << endl;
        cout << "Direccion Empleado :" << Empleado[i].dir_empleado.direccion << endl;
        cout << "Ciudad Empleado    :" << Empleado[i].dir_empleado.ciudad << endl;
        cout << "Provincia Empleado :" << Empleado[i].dir_empleado.provincia << endl;
        cout << "Salario Empleado   :" << Empleado[i].dir_empleado.salario << endl;
    }

    getch();
    return 0;
}

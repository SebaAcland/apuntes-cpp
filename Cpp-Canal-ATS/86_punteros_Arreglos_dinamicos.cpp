/*  Asignacion dinamica de arreglos
new: Reserva el numero de bytes solicitado por la declaracion
delete : Lbera un bloque de bytes reservamdo con anterioridad;

Ejemplo : PEdir a usuario n calificaciones y alacenarlos en un arreglo dinamico

Esto sirve par utilizar solo el espacion necesario para cada arreglo -- 
Antes si o si declaramos con un numero ejemplo array[100]; y no siempre lo utilizamosa todos.. se desperdicia memoria. 
*/

#include <conio.h>
#include <iostream>
#include <stdlib.h> // new y delete
using namespace std;

//Prototipo de funciones//
void pedirNotas();
void mostrarNotas();

//Var globales
int numCalif, *calif;

int main()
{

    pedirNotas();
    mostrarNotas();

    delete[] calif; // Estamos liberando el espacio en bytes en memoria;

    getchar();
    return 0;
} //--------------------------End MAIN-------------------------------//

// Declaracion de funciones
void pedirNotas()
{

    cout << "digite el numero de calificaciones :";
    cin >> numCalif;

    calif = new int[numCalif]; // crear arreglo;

    for (int i = 0; i < numCalif; i++)
    {
        cout << " Ingrese una nota: ";
        cin >> calif[i];
    }
}

void mostrarNotas()
{
    cout << "\n\n Mostrando notas del usuario: \n";
    for (int i = 0; i < numCalif; i++)
    {
        cout << calif[i] << endl;
    }
}

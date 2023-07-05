/* Hacer una estructura llamada corredor, en la cul tendra los siguientes campos:
Nombre, edad, sexo, club, pedir datos aal usuario para un corredor y asi una categoria de competicion:
Juvenil <= 18 años
Señor <=40 años.
Veterano > 40 años.
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicíon*/

#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];

} C1;

int main()
{

    char categoria[20];

    cout << "Nombre :";
    cin.getline(C1.nombre, 20, '\n');
    cout << "edad :";
    cin >> C1.edad;
    fflush(stdin); // para vaciar el buffer.
    cout << "Sexo : ";
    cin.getline(C1.sexo, 10, '\n');
    cout << "Club :";
    cin.getline(C1.club, 20, '\n');

    if (C1.edad <= 18)
    {
        strcpy(categoria, "juvenil");
    }
    else if (C1.edad > 18 && C1.edad <= 40)
    {
        strcpy(categoria, "Senior");
    }
    else
    {
        strcpy(categoria, "Veterano");
    }
    cout << "\n\n Datos del corredor : " << endl;
    cout << "Nombre :" << C1.nombre << endl;
    cout << "Edad : " << C1.edad << endl;
    cout << "Sexo :" << C1.sexo << endl;
    cout << "Club :" << C1.club << endl;
    cout << "Categoria :" << categoria << endl;

    getch();
    return 0;
}
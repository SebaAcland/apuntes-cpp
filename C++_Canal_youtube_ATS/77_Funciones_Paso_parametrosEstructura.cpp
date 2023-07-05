/* Paso de parametros tipo estructura.*/

#include <conio.h>
#include <iostream>
using namespace std;
// //Prototipos de funciones//
// void pedirDatos();
// void mostrarData(persona pers); --->> ME DIO ERROR PORQUE TODAVIA NO SE DECLARO struct persona-


//Global Var_
struct persona
{
    char nombre[30];
    int edad;

} p1;

//Prototipos de funciones//
void pedirDatos();
void mostrarData(persona pers);//---> Agora se! anduvo;


//------------------------------------------------------------------------------------------//
int main()
{
    pedirDatos();
    mostrarData(p1);
    getchar();
    return 0;
}
//------------------------------------------------------------------------------------------//
//Def Funciones-
void pedirDatos()
{
    cout << "Digite su nombre :";
    cin.getline(p1.nombre, 20, '\n');
    cout << "Digite su edad : ";
    cin >> p1.edad;
}
void mostrarData(persona pers)

{
    cout << "\n\nNombre : " << pers.nombre << endl;
    cout << "Edad :" << pers.edad << endl;
}




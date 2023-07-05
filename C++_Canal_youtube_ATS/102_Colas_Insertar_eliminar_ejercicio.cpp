/*
Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menu:
    1 - Insertar un caracter a una cola
    2 - Mostrar todos los elementos de la cola ,
    3 - Salir
 */

#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

// Prototipo de funciones---

void Menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *frente);
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n);

int main()
{
    Menu();



    getchar();
    return 0;
}

//Declaracion de funciones

void Menu()
{
    int opc;
    char dato;

    Nodo *frente = NULL;
    Nodo *fin = NULL;

    do
    {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar un caracter a una cola" << endl;
        cout << "2. Mostrar todos los elementos de la cola " << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion :";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\nIngrese el caracter para agregar a la cola :";
            cin >> dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout << "\nMostrando elementos de la cola :";
            while (frente != NULL)
            {
                suprimirCola(frente, fin, dato);
                if (frente == NULL)
                {
                    cout << dato << " , ";
                }
                else
                {
                    cout << dato << " . ";
                }
            }
            system("pause");
            break;
        case 3:
            break;
        }
        system("cls");

    } while (opc != 3);
}

//######## Funcion para inserar cola ###############//

void insertarCola(Nodo *&frente, Nodo *&fin, char n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    cout << "\nElemento " << n << " insertado a cola" << endl;
}
//##########  Funcion para chequear cola vacia #########

bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}

//##########  Funcion para eliminar elemntos de la cola #########

void suprimirCola(Nodo *&frente, Nodo *&fin, char &n)
{
    n = frente->dato;
    Nodo *aux = frente;

    if (frente == fin)
    {
        frente = fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux;
}


#include <conio.h>
#include <iostream>
using namespace std;

struct Nodo // Estructura de NODO!!!!
{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&pila, int &n);

int main()
{
    Nodo *pila = NULL;
    int dato;

    cout << "Digite un nro : ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "Digite un nro : ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "\nSacando los elementos de la pila" << endl;
    while (pila != NULL) // Fondo PILA!!
    {
        sacarPila(pila, dato);
        if (pila != NULL)
        {
            cout << dato << ",";
        }
        else
        {
            cout << dato << " . ";
        }
    }
    
    

    getchar();
    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo(); // 1 paso
    nuevo_nodo->dato = n;          // 2 Paso
    nuevo_nodo->siguiente = pila;  // 3 Paso
    pila = nuevo_nodo;             // 4 Paso

    cout << "\nElemento " << n << " agregado a pila" << endl;
}

void sacarPila(Nodo *&pila, int &n)
{

    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}


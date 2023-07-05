/*  Hacer un programa para agregar numeros enteros a una pila, hasta que usuario quiera,
despues mostrar tosos los numeros intriduciodos en la pila

 */

#include <conio.h>
#include <iostream>
using namespace std;
struct Nodo
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
    char rpt;

    do
    {
        
        
        cout << "Digite un numero :";
        cin >> dato;
        agregarPila(pila, dato);

        cout << "\nDesea agregar otro elemento a la pila ? (s/n) : ";
        cin >> rpt;

    } while ((rpt == 's') || (rpt == 'S'));

    while (pila != NULL)
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
    Nodo *nuevo_nodo = new Nodo(); // 1 paso Crear nuevo nodo y reservar memoria
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


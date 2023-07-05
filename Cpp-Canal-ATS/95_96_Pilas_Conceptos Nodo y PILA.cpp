/* NOTAS : PARA ENTENDER ESTE CONCEPTO VER EL SIGUIENTE VIDEO DE NODOS Y PUNTEROS -
                https://www.youtube.com/watch?v=8wPxYU6dprQ

Agregar elementos a una pila => 4 PASOS.
 */

 
#include <conio.h>
#include <iostream>
using namespace std;

struct Nodo  // Estructura de NODO!!!! 
{
    int dato;
    Nodo *siguiente;
};


void agregarPila(Nodo *&, int);


int main()
{
    Nodo *pila = NULL;
    int n1,n2;

    cout << "Digite un nro : " ;
    cin >> n1;
    agregarPila(pila, n1);

    cout << "Digite un nro : " ;
    cin >> n2;
    agregarPila(pila, n2);




    getchar();
    return 0;
}


void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();  // 1 paso
    nuevo_nodo->dato = n;           // 2 Paso
    nuevo_nodo->siguiente = pila;   // 3 Paso
    pila = nuevo_nodo;              // 4 Paso

    cout << "\nElemento " << n << "agregado a pila" << endl;


}

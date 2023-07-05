/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el
precio del producto al aplicarle el IVA*/

#include <iostream>

using namespace std;

int main()
{
    float SubTotal = 0, Total = 0;
    const float iva = 1.22;

    cout<<"\n Ingrese Subtotal:";cin>>SubTotal;

    Total = SubTotal*iva;

    cout<<"\n Total="<<Total;

    return 0 ;



}
/* Escribe un programa q defina un vector de nros y calcule la multiplicacion acumulada 
   sus elementos*/

#include<iostream>
#include<stdlib.h>

int main()
{       
    int numeros[] = {1,2,3,4,5};
    int multiplicacion = 1; // si inicializo en cero comienza multipliando por 0 y dara siempre 0!!
    int cualquier;
  

    for (int i = 0; i < 5; i++)
    {
        multiplicacion *= numeros[i];
      
       
    }

    

    std::cout<<"La multiplicaion acumulada de los elementos del vector es:"<<multiplicacion<<std::endl;
    std::cout<<"cualquier  : "<<cualquier<<std::endl; //quise demostrar que si ni inicializo se genera nros basura y no es 0

    system("pause");
    return 0;

}

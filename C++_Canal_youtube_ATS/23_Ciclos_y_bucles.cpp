/*  Relalize un programa que calcule y muestre en la salida estandar  la suma de los cuadrados
de los 10 primeros enteros > a 0*/

 #include <iostream>
 #include <conio.h>

 using namespace std;
 int main()
 {
     int suma = 0,cuadrado;
        
     
     for (int i=1; i<=10; i++)
     {
     cuadrado = i * i;
     suma += cuadrado;
                      
    }               //End for
    
    cout<<"el resultado de la suma es:"<<suma<<endl;

    getch();
    return 0;
}                  // End main

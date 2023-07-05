//Cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>



using namespace std;

int main(){
    char palabra[]  = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'}; 
    char nombre[30];

    cout<<"Digite su nombre: ";
    //gets(nombre); //1 metodo! porque cin no deja colocar espacios
    
    cin.getline(nombre,20,'\n'); //nomnre donde almacena ,,,20 espacios y termina cuando le damos enter..

    cout<<nombre<<endl;
        
    cout<<palabra<<endl;
    cout<<palabra2<<endl;
    

    getch();
    return 0 ;
    

}
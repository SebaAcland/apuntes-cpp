// serie de fibonacci

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, x=0, y=1, z=1;
    cout<<"Digite el numero de elementos:"; cin>>n;
    cout<<"1  ";                                   //para que aparesca en pantalla la primera vez "1" 1 2 3 5 8
    for (int i = 1; i <= n; i++)
    {
        z= x + y;
        cout << z << "  "; // 1
        x = y;    //1
        y = z;    // 1

    }
    cout<<"\n";
    system("pause");
    
    return 0;
}
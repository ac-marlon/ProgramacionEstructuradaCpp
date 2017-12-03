#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i, f;
    f=1; n=0;
    cout<<"Programa para calcular el factorial de un numero"<<endl;
    cout<<"\n"<<endl;
    cout<<"Introduzca el numero que desea evaluar"<<endl;
    cout<<"\n"<<endl;
    cout<<"El numero evaludado es: "; cin>>n;
    cout<<"\n"<<endl;
    for (i=1; i<=n; i++)
    {
        f=f*i;
    }
    cout<<"Y su factorial es: "<<f;
    cout<<"\n"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

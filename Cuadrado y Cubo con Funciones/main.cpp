#include <cstdlib>
#include <iostream>

int cubo(int a)
{
    int c;
    c=a*a*a;
    return c;
}

int cuadrado(int b)
{
    int t;
    t=b*b;
    return t;
}

using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Programa que calcula el Cuadrado y el Cubo de los primeros 10 numeros naturales"<<endl;
    cout<<"\n";
    int i;
    for (i=0; i<10 ;i++)
    cout<<i<<" "<<cuadrado(i)<<" "<<cubo(i)<<" "<<endl;
    cout<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

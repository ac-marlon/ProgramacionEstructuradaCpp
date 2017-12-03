#include <cstdlib>
#include <iostream>
#include <stdio.h>

long int htorres(int n)
{
     if(n==1)
            return 1;
     else
         return 2*(htorres(n-1))+1;   
}

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    cout<<"Programa que arroja el minimo de movimientos para la Torre de Hanoi"<<endl;
    cout<<"\n";
    cout<<"Introduzca el numero de discos (MENOR A 31)"<<endl;
    cin>>a;
    cout<<"\n";
    cout<<"El minimo numero de movimientos para "<<a<<" discos es: "<<endl;
    cout<<htorres(a)<<endl; 
    
    system("PAUSE");
}

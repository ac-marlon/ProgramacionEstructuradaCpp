#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, num1, num2, term;
    num1=0;
    num2=1;
    term=1;
    cout<<"Programa para hallar la Sucesion de Fibonacci hasta el n-simo termino"<<endl;
    cout<<""<<endl;
    cout<<"Intoduzca el termino hasta el cual quiere representar la sucesion"<<endl;
    cout<<""<<endl;
    cout<<"El termino de la sucesion es: "; cin>>n;
    cout<<""<<endl;
    cout<<"Y la sucesion hasta ese termino es: "<<endl;
    for (i=1; i<=n; i++)
    {
        term=num1+num2;
        cout<<""<<endl;
        cout<<i; cout<<". "; cout<<term;
        num1=num2;
        num2=term;
    }
    cout<<""<<endl;
    cout<<"\n"<<endl; 
    system("PAUSE");
    return EXIT_SUCCESS;
}

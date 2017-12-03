#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char String[14];
    int i;
    cout<<"...::Programa para leer e invertir un String de maximo 15 caracteres::..."<<endl;
    cout<<"\n";
    cout<<"Introduzca 15 valores correspondientes a la longitud del String"<<endl;
    cout<<"\n";
    for (i=0; i<15; i++)
    {   
        
        cin>>String[i];
        
    }
    cout<<"\n";
    cout<<"La cadena ORIGINAL queda asi: "<<endl;
    cout<<"\n";
    for (i=0; i<15; i++)
    {   
        cout<<String[i]; 
    }
    cout<<"\n";
    cout<<"La cadena INVERTIDA queda asi: "<<endl;
    cout<<"\n";
    for (i=15; i>=0; i--)
    {   
        cout<<String[i-1]; 
    }
    cout<<"\n";
    cout<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

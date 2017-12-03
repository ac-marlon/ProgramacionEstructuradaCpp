#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int Array[9];
    int i, Aux, s, vm, Mayor=0, Menor=0, j;
    cout<<"...::Programa para manipular un Array::..."<<endl;
    cout<<"\n";
    cout<<"Introduzca 10 valores correspondientes a la longitud del array"<<endl;
    cout<<"\n";
    Aux=0;
    s=0; 
    
    for (i=0; i<10; i++)
    {   
        cout<<"Digite el "<<i+1<<"' numero:"<<endl;
        cin>>Array[i];
        cout<<"\n";
        Aux=(Array[i]+s);
        s=Aux; 
    }
    cout<<"\n";
    cout<<"La suma del total de datos en el Array es: "<<s<<endl;
    cout<<"\n";
    vm=(s/10);
    cout<<"El valor medio de los datos del Array es: "<<vm<<endl;
    cout<<"\n";
    
    Mayor=Array[0];
    for (j=0; j<10; j++)
    {
        if (Array[j]>Mayor)
        {
           Mayor=Array[j];
        }
    }
    cout<<"El mayor numero en el Array es: "<<Mayor<<endl;
    cout<<"\n";
    
    Menor=Array[0];
    for (j=0; j<10; j++)
    {
        if (Array[j]<Menor)
        {
           Menor=Array[j];
        }
    }
    cout<<"El menor numero en el Array es: "<<Menor<<endl;
    cout<<"\n";
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

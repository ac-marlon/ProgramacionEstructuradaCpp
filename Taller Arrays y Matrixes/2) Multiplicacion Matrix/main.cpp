#include <cstdlib>
#include <iostream>

using namespace std;
#define Fil 3
#define Col 3

int main(int argc, char *argv[])
{
    int Matrix[Fil][Col];
    int i, j;
    cout<<"...::Programa para multiplicar por 2 los elementos de una Matriz::..."<<endl;
    cout<<"\n";
    for (i=0; i<Fil; i++)
    {
        for (j=0; j<Col; j++)
        {
            cout<<"Introduzca la posicion: "<<"Fila "<<i+1<<", "<<"Columna "<<j+1<<endl;
            cin>>Matrix[i][j];
            cout<<"\n";
        }
    }
    cout<<"---------------------------------------------------------------------";
    cout<<"\n";
    cout<<"Asi es la Matriz ORIGINAL: "<<endl;
    cout<<"\n";
    for (i=0; i<Fil; i++)
    {
        for (j=0; j<Col; j++)
        {
            cout<<"Fila "<<i+1<<", "<<"Columna "<<j+1<<endl;
            cout<<Matrix[i][j]<<endl;
            cout<<"\n";
        }
    }
    cout<<"---------------------------------------------------------------------";
    cout<<"\n";
    cout<<"Y asi es la Matriz FINAL: "<<endl;
    cout<<"\n";
    for (i=0; i<Fil; i++)
    {
        for (j=0; j<Col; j++)
        {
            cout<<"Fila "<<i+1<<", "<<"Columna "<<j+1<<endl;
            cout<<(Matrix[i][j])*2<<endl;
            cout<<"\n";
        }
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

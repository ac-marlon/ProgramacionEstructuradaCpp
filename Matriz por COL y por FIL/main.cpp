#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    int A[2][3]={{-1, 0, 1},{2, -2, 0}};
    int i, j, Fil, Col;
    cout<<"...::Programa para mostrar una matriz por Filas y por Columnas::..."<<endl;
    cout<<"\n";
    cout<<"Asi se muestra por FILAS: "<<endl;
    Fil=2;
    Col=3;
    for (i=0; i<Fil; i++)
    {
        for (j=0; j<Col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Asi se muestra por COLUMNAS: "<<endl;
    for (j=0; j<Fil; j++)
    {
        for (i=0; i<Col; i++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<"\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

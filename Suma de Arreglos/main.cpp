#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i, A[n], B[n], C[n];
    cout<<"Programa para sumar dos vectores (A, B) de igual longitud."<<endl;
    cout<<"\n"<<endl;
    cout<<"Digite la longitud de los Vectores A y B: "<<endl;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"Ingrese un numero Entero en la posicion A["<<i<<"]: "<<endl;
        cin>>A[i];
        cout<<"\n"<<endl;
        cout<<"Ingrese un numero Entero en la posicion B["<<i<<"]: "<<endl;
        cin>>B[i];
        cout<<"\n"<<endl;
        C[i]=A[i]+B[i];
    }
    
    cout<<"-------------------------RESULTADOS-------------------------"<<endl;
    cout<<"\n"<<endl;
    
    i=0;
    while (i<n)
    {
          cout<<"El Vector A, en A["<<i<<"] es: "<<A[i]<<endl;
          cout<<"El Vector B, en B["<<i<<"] es: "<<B[i]<<endl;
          cout<<"\n"<<endl;
          cout<<"La suma de A y B es: "<<C[i]<<endl;
          cout<<"\n"<<endl;
          i++;
    }
          
    system("PAUSE");
    return EXIT_SUCCESS;
}

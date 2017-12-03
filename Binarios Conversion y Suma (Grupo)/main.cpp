#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, A[8], B[8], C[8], i, Acarreo;
    cout<<"Programa para convertir 2 numeros de Base10 a Base2 y sumarlos..."<<endl;
    cout<<"\n";
    cout<<"Digite dos numeros Enteros Positivos: "<<endl;
    cout<<"\n";
    cin>>a;
    cin>>b;
    cout<<"\n";
    
    for (i=0; i<8; i++) 
    { 
      A[i]=a%2; 
      a=a/2;
      B[i]=b%2;
      b=b/2; 
             if (A[i]==1 && B[i]==1)
             {
                C[i]=0;
                Acarreo=1;
                if (Acarreo==1 && A[i+1]==1)
                {
                   A[i+1]=0;
                   C[i+1]=A[i+1]+B[i+1];                   
                }
                else
                {
                    C[i+1]=0;
                    Acarreo=1;  
                }        
             }
             else
             {
                 C[i]=A[i]+B[i];
             }
      } 
      
    cout<<"El primer numero equivale a: "<<endl;
    for (i=7; i>=0; i--)
    {
        cout<<A[i];
    } 
    cout<<"\n";
    cout<<"\n";
    cout<<"El segundo numero equivale a: "<<endl;
    for (i=7; i>=0; i--)
    {
        cout<<B[i];
    } 
    cout<<"\n";
    cout<<"\n";
    cout<<"Y su suma es: "<<endl;
    for (i=7; i>=0; i--)
    { 
        cout<<C[i];
    }
    cout<<"\n";
    cout<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

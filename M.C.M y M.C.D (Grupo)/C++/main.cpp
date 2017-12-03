#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int div1=0, div2=0, res=0, mcm=0, A, B;
    cout<<"Programa para hallar el M.C.D y el M.C.M de dos numeros Enteros (A, B)."<<endl;
    cout<<"\n";
    cout<<"Digite dos numeros Enteros: "<<endl;
    cout<<"\n";
    cin>>A;
    cin>>B;
    cout<<"\n";
    if (B!=0 && A!=0)
      {
             div1=A;
             div2=B;
             res=div1 % div2;
         do
          {
               div1=div2;
               div2=res;
               res=div1 % div2;
          } 
         while (res>0); 
             
         mcm =(A*B)/div2;
         cout<<"El maximo comun divisor (M.C.D) es "<<div2<<endl;
         cout<<"El minimo comun multiplo (M.C.M) es "<<mcm<<endl;
      }
      else
      {
          cout<<"El minimo comun multiplo (M.C.M) y el maximo comun divisor (M.C.D) son 0"<<endl;
      }
    cout<<"\n";
      
    system("PAUSE");
    return EXIT_SUCCESS;
}

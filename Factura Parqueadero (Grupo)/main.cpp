#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int i, n, k, horas, cargo;
    cout<<"...::Programa para generar recibos de pago para un parqueadero::..."<<endl;
    cout<<"\n";
    cout<<"Introduzca el numero de clientes de ayer: "<<endl;
    cin>>n;
    cout<<"\n";
    cout<<"Digite la hora de entrada y salida:"<<endl;
  int Array[n], Array1[n], Array2[n], AE[n], AE1[n], AE2[n], AS[n], AS1[n], AS2[n];

    for(i=0; i<n; i++)
    {        
             cout<<"Cliente Numero: "<<i<<endl;
             cout<<"Tiempo de entrada: "<<endl;
             cout<<"\n"; 
             cout<<"Horas"; cin>>AE[i];  
             cout<<"Min."; cin>>AE1[i];
             cout<<"Seg."; cin >>AE2[i]; 
             cout<<"\n"; 
             cout<<"Tiempo de salida: "<<endl; 
             cout<<"\n";
             cout<<"Horas"; cin>>AS[i];
             cout<<"Min."; cin>>AS1[i]; 
             cout<<"Seg."; cin >>AS2[i]; 
             cout<<"\n"; 
             Array[i]= AS[i]-AE[i];
             Array1[i]=AS1[i]-AE1[i];
             Array2[i]=AS2[i]-AE2[i]; 
             if(Array[i]>23 && Array1[i]>59 && Array2[i]>59)
             {
                            cout<<"La tarifa maxima son 24 horas (No se puede calcular)"<<endl;
             }
             else if(Array[i]<3)
             {
                  if(Array1[i]>0 && Array2[i]>0)
                  {
                      cout<<"Su deuda es de $2000 (Dos mil pesos)"<<endl;
                  }
                  else 
                  {
                      cout<<"Su deuda es de $2000 (Dos mil pesos)"<<endl;
                  }
             }
             else if(Array[i]=3)
             { 
                  if(Array1[i]>0 && Array2[i]>0)
                  {
                                 cout<<"Su deuda es de $2500 (Dos mil quinientos pesos)"<<endl;    
                  }
                  else
                  { cout<<"Su deuda es de $2000 (Dos mil pesos)"<<endl;
                  }
             }
             else if(Array[i]>3 )
             {
                  if(Array1[i]>0 && Array2[i]>0)
                  {
                     horas=(Array[i]+1)-3;
                     cargo=(horas*500)+2000;                         
                  }
                  else
                  {
                      horas= Array[i]-3;
                      cargo=(horas*500)+2000;
                  }
             }
              
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

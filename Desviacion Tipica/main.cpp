#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>


using namespace std;

int main(int argc, char *argv[])
{
    
    int n, i, j;
    float nx, s, p, sumatoria, dt;
    nx=0, s=0, p=0, sumatoria=0, dt=0;
    i=0, j=0;
    
    cout<<"...::Programa para calcular la DESVIACION TIPICA de una muestra::..."<<endl;
    cout<<"\n"<<endl;
    
    for( ; ;j++){
         cout<<"Introduzca el tama\xA4o de la muestra: "<<endl;
         cin>>n;
         cout<<"\n"<<endl;
         float Array[n];
         cout<<"Tenga en cuenta el rango permitido para los datos de la muestra: "<<endl; 
         cout<<"[80.0 , 100.0]"<<endl;
         cout<<"\n"<<endl;
         while(i<n){
                    cout<<"Ingrese el dato #"<<i+1<<" de la muestra"<<endl;
                    cin>>nx;
                    Array[i]=nx;
                    i++;
                    }
         i=0;
         while(i<n){
                    s=s+Array[i];
                    i++;
                    }
         p=s/n;
         i=0;
         while(i<n){
                    sumatoria=sumatoria+((Array[i]-p)*(Array[i]-p));
                    i++;
                    }

         dt=sqrt(sumatoria/(n-1));
         cout<<"La desviacion tipica es: "<<dt<<endl;
         break;                      
           
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}


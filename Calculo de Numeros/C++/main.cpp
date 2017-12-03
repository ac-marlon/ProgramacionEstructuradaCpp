#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, num, pos, neg, cer, i;
    pos=0; neg=0; cer=0;
    cout<<"Programa para hallar numeros Positivos, Negativos y Ceros"<<endl;
    cout<<""<<endl;
    cout<<"Digite la cantidad de numeros ENTEROS que desea procesar:"<<endl;
    cout<<""<<endl;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"Digite un numero ENTERO para clasificarlo..."<<endl;
        cout<<""<<endl;
        cin>>num;
        if (num>0)
        {
            cout<<"El numero es positivo"<<endl;   
            cout<<""<<endl;
            pos++;
        }
            else
            {
                if (num<0)
                {
                    cout<<"El numero es negativo"<<endl;    
                    cout<<""<<endl;  
                    neg++;
                }
                    else
                    {
                        cout<<"El numero es cero"<<endl;
                        cout<<""<<endl;
                        cer++;
                        }
            }           
            cout<<"El numero es "<<num<<endl;
            cout<<""<<endl;
    }
    cout<<"La cantidad de numeros POSITIVOS es "<<pos<<endl;
    cout<<""<<endl;
    cout<<"La cantidad de numeros NEGATIVOS es "<<neg<<endl;
    cout<<""<<endl;
    cout<<"La cantidad de numeros CERO es "<<cer<<endl;
    cout<<""<<endl;
    cout<<"La cantidad de numeros analizados fue "<<n<<endl;  
    cout<<""<<endl;             
             
    system("PAUSE");
    return EXIT_SUCCESS;
}

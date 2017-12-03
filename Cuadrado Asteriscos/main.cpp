#include <cstdlib>
#include <iostream>

using namespace std;
const char simb='*';

int main(int argc, char *argv[])
{
    int lado, i, j;

    cout<<"Escriba el lado del Cuadrado: ";
    cin>>lado;
    for(i = 0; i<lado; i++){
          for(j = 0; j<lado; j++){
                 if((j > 0 && j < lado-1)&&(i>0&&i<lado-1)){
                        cout<<' ';
                        }
                        else
                        cout<<'*';
                        }
                 cout<<' '<<endl;
                 }

    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
#define PI 3.14159265

int main(int argc, char *argv[])
{
    float V1, V2, B, h, L1, L2, LF1, LF2, A1, B1, C1, X, X1, XF;
    
    h=0;
    cout<<"Programa para calcular la altura de un triangulo... (POZO PETROLERO)"<<endl;
    cout<<"\n";
    cout<<"Digite la longitud primera varilla"<<endl;
    cin>>V1;
    cout<<"\n";
    cout<<"Digite la longitud de la segunda varilla"<<endl;
    cin>>V2;
    cout<<"\n";
    cout<<"Digite la longitud de la base del pozo"<<endl;
    cin>>B;
    cout<<"\n";    
    
    if(B>V1 || B>V2)
    {
            cout<<"No se puede formar un tirangulo "<<endl;
            }
            else
            {
    
    (L1)=((V2*V2)-(B*B));
    LF1=(sqrt(L1));
    (L2)=((V1*V1)-(B*B));
    LF2=(sqrt(L2));
    
    B1=asin(LF2/V1)*57,29;
    A1=asin(LF1/V2)*57,29;
    
    X=B*(tan(B1*PI/180));
    X1=tan(B1*PI/180)+tan(A1*PI/180);
    XF=(X/X1);
    
    h=tan(A1*PI/180)*XF;    
    
    cout<<"La altura (h) del triangulo es:"<<endl;
    cout<<h<<endl;
    cout<<"\n";
    
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

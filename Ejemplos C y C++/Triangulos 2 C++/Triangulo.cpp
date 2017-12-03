#include <cstdlib>
#include <iostream>
#include <math.h>
#define PI 3.14159265 
using namespace std;

int main(int argc, char *argv[])
{
    float a,b,c,x,s,A,B,C,S;
    cout<<endl<<endl<<"   Escriba el valor del primer lado:  ";
    cin>>a;
    cout<<endl<<"   Escriba el valor del segundo lado: ";
    cin>>b;
    cout<<endl<<"   Escriba el valor del tercer lado:  ";
    cin>>c;
    if (((a + b) > c) && ((a+c) > b) && ((b+c) > a))
    {
            if (a==b && b==c)
            {
                     cout<<"\n\n\tEs un triangulo Equilatero"<<endl;
                     s=(a+b+c)/2;
                     x = sqrt (s*(s-a)*(s-b)* (s-c));
                     cout<<"\tArea: "<<x<<endl;
                     A = acos((b*b+c*c-a*a)/(2*b*c))*180/PI;
                     B = acos((a*a+c*c-b*b)/(2*a*c))*180/PI;
                     C = 180 - (A + B);
                     cout<<"\tEl angulo A es: "<<A<<endl;
                     cout<<"\tEl angulo B es: "<<B<<endl;
                     cout<<"\tEl angulo C es: "<<C<<endl<<endl;                   
            }
             if (a==b && a!=c || a==c && a!=b|| c==b && c!= a)
            {
                      cout<<"\n\n\tEs un triangulo Isoceles"<<endl;
                      s=(a+b+c)/2;
                      x = sqrt (s*(s-a)*(s-b)* (s-c));
                      cout<<"\tArea: "<<x<<endl;
                      A = acos((b*b+c*c-a*a)/(2*b*c))*180/PI;
                      B = acos((a*a+c*c-b*b)/(2*a*c))*180/PI;
                      C = 180 - (A + B);
                      cout<<"\tEl angulo A es: "<<A<<endl;
                      cout<<"\tEl angulo B es: "<<B<<endl;
                      cout<<"\tEl angulo C es: "<<C<<endl<<endl;
            }
             if (a!=b && b!=c && a!=c)
            {
                cout<<"\n\n\tEs un triangulo Escaleno"<<endl;
                s=(a+b+c)/2;
                x = sqrt (s*(s-a)*(s-b)* (s-c));
                cout<<"\tArea: "<<x<<endl;
                A = acos((b*b+c*c-a*a)/(2*b*c))*180/PI;
                B = acos((a*a+c*c-b*b)/(2*a*c))*180/PI;
                C = 180 - (A + B);
                cout<<"\tEl angulo A es: "<<A<<endl;
                cout<<"\tEl angulo B es: "<<B<<endl;
                cout<<"\tEl angulo C es: "<<C<<endl<<endl;
            }
    }
    else
    {
        cout<<"\n\n\n\tNo se puede formar un triangulo con los datos dados."<<endl<<endl;
    }
system("PAUSE");
return EXIT_SUCCESS;
}    

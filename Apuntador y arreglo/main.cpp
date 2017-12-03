#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(int argc, char *argv[])
{
    int A[10], i, *p;
    p=A;
    cout<<"1. Forma tardicional: "<<endl;
    for(i=0; i<10; i++)
    {
        A[i]=0;
        cout<<A[i];
    }
    cout<<"\n";
    
    cout<<"2. Sin desplazar apuntador P: "<<endl;
    for(i=0; i<10; i++)
    {
        *(p+i)=0;
        cout<<A[i];
    }
    cout<<"\n";
    cout<<"3. Sin desplazar Apuntador P: "<<endl;
    for(i=0; i<10; i++)
    {
        p[i]=0;
        cout<<p[i];
    } 
    cout<<"\n";
    cout<<"4. Desplazando Apuntador P: "<<endl;
    for(p=A; p<&A[10]; p++)
    {
        *p=0;
        cout<<*p;
    }
    cout<<"\n";
    cout<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

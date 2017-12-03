#include <cstdlib> 
#include <stdlib.h>
#include <math.h> 
#include <iostream>
#include <time.h> 
using namespace std;

int main(int argc, char *argv[]) 
{ 
int a1,a2,a3,a4,n1,n2,n3,n4; 
srand (time (NULL));
a1=rand() % 10; 
a2=rand() % 10;
a3=rand() % 10;
a4=rand() % 10;
cout<<"\t\n\n Ingrese los 4 numeros que desea jugar: "<<endl;
cout<<" ";
cin>>n1;
cout<<" ";
cin>>n2;
cout<<" ";
cin>>n3;
cout<<" ";
cin>>n4;
cout<<"\t\n\n El numero ganador de la loteria es "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl<<endl;

if (n1!=a1 && n2!=a2 && n3!=a3 && n4!=a4)
{
           cout<<"No has ganado nada. "<<endl;
}
else if (n1!=a1 && n2!=a2 && n3!=a3 && n4==a4||n1==a1 && n2!=a2 && n3!=a3 && n4==a4||n1==a1 && n2==a2 && n3!=a3 && n4==a4||n1!=a1 && n2==a2 && n3!=a3 && n4==a4)
{
           cout<<"Has ganado $5000..!!"<<endl;
}
else if (n1!=a1 && n2!=a2 && n3==a3 && n4==a4 || n1==a1 && n2!=a2 && n3==a3 && n4==a4)
{
           cout<<"Has ganado $10000..!!"<<endl;
}
else if (n1!=a1 && n2==a2 && n3==a3 && n4==a4)
{
           cout<<"Has ganado $100000..!!"<<endl;
}
else if (n1==a1 && n2==a2 && n3==a3 && n4==a4)
{
           cout<<"Has ganado $1000000..!!"<<endl;
}
else
{
    cout<<"No has ganado nada."<<endl;
}

cout<<"\t"<<endl<<endl;
system("PAUSE"); 

}


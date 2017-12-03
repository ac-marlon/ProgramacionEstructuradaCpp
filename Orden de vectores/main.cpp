#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[10], i, j, m;
	cout<<"Programa para ordenar un vector de longitud 10"<<endl;
	cout<<"\n";
	cout<<"Digite 10 numeros Enteros"<<endl;
	cout<<"\n";
	for(i=0; i<10; i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	cout<<"Muestra el Vector original"<<endl;   
    cout<<"\n";
	for(j=0;j<10;j++)
	{          
		cout<<a[j]<<", ";
	}
    cout<<"\n";
	for(i=0; i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	cout<<"\n";
	cout<<"Muestra el vector de menor a MAYOR"<<endl;   
    cout<<"\n";
	for(i=0;i<10;i++)
	{             
		cout<<a[i]<<", ";;
	}
    cout<<"\n";
	for(i=0; i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	cout<<"\n";
	cout<<"Muestra el vector de MAYOR a menor"<<endl;   
    cout<<"\n";
	for(i=0;i<10;i++)
	{             
		cout<<a[i]<<", ";;
	}
	cout<<"\n"<<endl;
	cout<<"El tama\xA4o del vector es 10"<<endl;
	cout<<"\n";
	
	
    system("PAUSE");
    return EXIT_SUCCESS;
}

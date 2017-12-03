#include <cstdlib>
#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char *argv[])
{
    double cap, I, n, f, N, i, P;
	int SC;
	cout<<"SIMULADOR DE INVERSIONES"<<endl;
	cout<<"\n";
	cout<<"\n";
	cout<<"Introduzca el capital que desea rentar"<<endl;
	cout<<"$"; cin>>cap;
	cout<<"\n";
	cout<<"El CDT tendra las siguientes caracteristicas: "<<endl;
	cout<<"\n";
	cout<<"Ingrese una tasa de interes nominal anual"<<endl;
	cin>>I;
	cout<<"\n";
	cout<<"Ingrese el tiempo total de la inversion (indicador anual)"<<endl;
	cin>>n;
	cout<<"\n";
	cout<<"\n";
	cout<<"**************************************************************"<<endl;
	cout<<"*   Por favor elija el Sistema de mortizacion de intereses   *"<<endl;
	cout<<"*                                                            *"<<endl;
	cout<<"*          1. Capitalizacion mensual                         *"<<endl;
	cout<<"*          2. Capitalizacion trimestral                      *"<<endl;
	cout<<"*          3. Capitalizacion semestral                       *"<<endl;
	cout<<"*          4. Capitalizacion anual                           *"<<endl;
	cout<<"*                                                            *"<<endl;
	cout<<"**************************************************************"<<endl;
	cin>>SC;
    cout<<"\n";
	cout<<"\n";

	switch(SC)
	{
	case 1:{				
				cout<<"Capitalizacion mensual"<<endl;
				cout<<"\n";
				P=12;
				i=I/P;
				N=n*12;
				f=cap*pow((1+(i/100)),N);
				cout<<"El capital es: $"<<cap<<endl;
				cout<<"La tasa de interes nominal anual es: "<<I<<endl;
				cout<<"El tiempo total de la inversion (indicador anual) es: " <<n<<endl;
				cout<<"La tasa de interes efectiva capitalizable por cada periodo de tiempo es: "<<i<<endl;
				cout<<"\n";
				cout<<"El valor futuro de la inversion es: "<<f<<endl;
				break;
			 }

	case 2:{
				cout<<"Capitalizacion trimestral"<<endl;
				cout<<"\n";
				P=4;
				i=I/P;
				N=n*4;
				f=cap*pow((1+(i/100)),N);
				cout<<"El capital es: $"<<cap<<endl;
				cout<<"La tasa de interes nominal anual es: "<<I<<endl;
				cout<<"El tiempo total de la inversion (indicador anual) es: " <<n<<endl;
				cout<<"La tasa de interes efectiva capitalizable por cada periodo de tiempo es: "<<i<<endl;
				cout<<"\n";
				cout<<"El valor futuro de la inversion es: "<<f<<endl;
				break;
			 }

	case 3:{
				cout<<"Capitalizacion trimestral"<<endl;
				cout<<"\n";
				P=2;
				i=I/P;
				N=n*2;
				f=cap*pow((1+(i/100)),N);
				cout<<"El capital es: $"<<cap<<endl;
				cout<<"La tasa de interes nominal anual es: "<<I<<"%"<<endl;
				cout<<"El tiempo total de la inversion (indicador anual) es: " <<n<<endl;
				cout<<"La tasa de interes efectiva capitalizable por cada periodo de tiempo es: "<<i<<endl;
				cout<<"\n";
				cout<<"El valor futuro de la inversion es: "<<f<<endl;
				break;
			 }

	case 4:{
				cout<<"Capitalizacion trimestral"<<endl;
				cout<<"\n";
				P=1;
				i=I/P;
				N=n*1;
				f=cap*pow((1+(i/100)),N);
				cout<<"El capital es: $"<<cap<<endl;
				cout<<"La tasa de interes nominal anual es: "<<I<<"%"<<endl;
				cout<<"El tiempo total de la inversion (indicador anual) es: " <<n<<endl;
				cout<<"La tasa de interes efectiva capitalizable por cada periodo de tiempo es: "<<i<<endl;
				cout<<"\n";
				cout<<"El valor futuro de la inversion es: "<<f<<endl;
				break;
			 }
	default: cout<<"No es una opcion, intente nuevamente..."<<endl;
	}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

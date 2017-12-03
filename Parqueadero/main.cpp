#include <cstdlib>
#include <iostream>

int long Calcular_cargo(int th, int tm, int ts, int cargot, int hora)
{
    if (th==24 && tm==0 && ts==0)
    {
              cargot=10000;
    }
    else
    {
        	if (th<3)
	{
		if(tm>0 || ts>0)
		{
			cargot=2000;
		}
		else
		{
			cargot=2000;
		}
	}
	if(th==3)
	{
		if(tm>0 || ts>0)
		{
			cargot=2500;
		}
		else
		{
			cargot=2000;
		}
	}
	 if(th>=4)
	{
		if(tm>0 || ts>0)
		{
			hora=(th+1)-4;
			cargot=(hora*500)+2500;
		}
		else
		{
			hora=th-3;
			cargot=(hora*500)+2500;
		}
	}

    }

	return cargot;
}

using namespace std;

int main(int argc, char *argv[])
{
	int n, i=0, j=0, tiempoh, tiempom, tiempos, cargot=0, hora=0; // min, seg, hora1, min1, seg1, Tiempot;
	cout<<"PROGRAMA PARA GENERAR RECIBOS DE PAGO PARA UN PARQUEADERO"<<endl;
	cout<<"\n";
	cout<<"Introduzca el numero de clientes de ayer:"<<endl;
	cin>>n;
	int Arrayeh[n],Arrayem[n],Arrayes[n], Arraysh[n], Arraysm[n], Arrayss[n], cargo[n];
	for(i=0; i<n; i++)
	{
		cout<<"\n";
		cout<<"CLIENTE NUMERO "<<i+1<<endl;
		cout<<"Digite la hora de entrada"<<endl;
		cout<<"Horas  "; cin>>Arrayeh[i];
		cout<<"Minutos  "; cin>>Arrayem[i];
		cout<<"Segundos  "; cin>>Arrayes[i];
		
		cout<<"Digite la hora de salida"<<endl;
		cout<<"Horas  "; cin>>Arraysh[i];
		cout<<"Minutos  "; cin>>Arraysm[i];
		cout<<"Segundos  "; cin>>Arrayss[i];
		
		tiempoh=Arraysh[i]-Arrayeh[i];
		tiempom=Arraysm[i]-Arrayem[i];
		tiempos=Arrayss[i]-Arrayes[i];
        
        if(tiempoh<0)
        {
                     tiempoh=tiempoh*(-1);
        }
        if(tiempom<0)
        {
                     tiempom=tiempom*(-1);
        }            
        if(tiempos<0)
        {
                     tiempos=tiempos*(-1);
        }
		
		cout<<"\n";		
		cout<<"El tiempo en que ud se quedo parqueado es:"<<tiempoh <<"Horas"<<tiempom<<"Min."<<tiempos<<"Seg."<<endl;
        cargo[i]=Calcular_cargo(tiempoh, tiempom, tiempos, cargot, hora);		
	}
    cout<<"\n";
    cout<<"\n";
    cout<<"RECIBOS DE PAGO";
	cout<<"\n";
    for(j=0;j<n;j++)
	{
        
		cout<<"El cargo del cliente numero" <<j+1<<" es: "<<cargo[j]<<endl;
	}

    system("PAUSE");
    return 0;
}

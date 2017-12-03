#include "iostream"
#include "conio.h"
using namespace std;
int main()
{
  int mat[4][4];
  int n,i,j,aux,suma,cont;
  cout<<" \n \n \t \t \t \tCuadrado Magico \n \n";
   cout<<"\t \t Valores de 1 al 9 ( los numeros no se deben repitir)\n \n\n";
      cout<<"\n \t \t \t \tINGRESE LA MATRIZ \n\n";
   


  for (i=1;i<=3;i++)
  {
   for (j=1;j<=3;j++)
   {
      do
      { cout<<" \t \t \t \tValor "<<"("<<i;
 cout<<" "<<j<<") ";
 cin>>aux;
       }
       while(aux<1 || aux>9) ;
 mat[i][j]=aux;
        
   }
  }
 // Imprime la  matriz
for (i=1;i<=3;i++)
 {
  cout<<"\n \t \t \t \t";
   for (j=1;j<=3;j++)
   {


       cout<<mat[i][j];
       cout<<"\t";
   }
   }
 cont=0; aux=0;
      //sumando filas
      for (i=1;i<=3;i++)
 { suma=0;
   for (j=1;j<=3;j++)
   {
    suma+=mat[i][j];
   }
   if(i==1)
   { aux=suma;
   }
   if(aux==suma)
    {
      cont++;
    }
 }


 //Suma las columnas


 for (i=1;i<=3;i++)
 { suma=0;
   for (j=1;j<=3;j++)
   {
    suma+=mat[j][i];
   }
  if(aux==suma)
    {
      cont++;
    }
 }


 //Suma las diagonales


  suma=0;
    suma+=mat[1][1];
    suma+=mat[2][2];
    suma+=mat[3][3];
   if(aux==suma)
    { cont++;
    }
  suma=0;
    suma+=mat[1][3];
    suma+=mat[2][2];
    suma+=mat[3][1];


   if(aux==suma)
    {
      cont++;
    }
 if (cont==8)
 {
  cout<<"\n\n \t \t \t \t Es un cuadro magico";
 }
 else
 { cout<<"\n \n\t \t \t \t No es un cuadro magico";
 }
 getch();
  }

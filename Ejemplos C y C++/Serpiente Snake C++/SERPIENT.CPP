#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINEAS 25
#define COLUMNAS 40
#define FONDO BLACK
#define COMIDA RED
#define IZQUIERDA 75
#define DERECHA  77
#define ARRIBA 72
#define ABAJO  80
#define CHOCO 1
#define SI 0
#define NO 1

int matriz[LINEAS][COLUMNAS+1];
int direccion=DERECHA;
int estajugando=NO;
int ValidarDireccion(int nuevadireccion);
void MoverSerpiente();
void creditos();
typedef struct
{
 int x;
 int y;
}puntos;

struct
{
 int tamano;
 puntos cuerpo[100];
}serpiente;

void crearpunto(int x,int y,int color)
{
if(color!=FONDO && color!=COMIDA)
 if(estajugando==SI && matriz[y][x]==CHOCO){
  delay(1000);textbackground(FONDO);
  clrscr();gotoxy(3,3);cprintf("PERDISTE");getch();
  creditos();
  exit(EXIT_SUCCESS);
 }

 textbackground(color); gotoxy(x,y); cprintf(" ");
 if(color!=FONDO && color!=COMIDA) matriz[y][x]=CHOCO;
 else
  if(color==COMIDA) matriz[y][x]=COMIDA;
   else
    matriz[y][x]=0;
}

void inicializarmatriz()
{
 int i,j;
 serpiente.tamano=1;
 for(i=1;i<=LINEAS-1;i++)
  for(j=1;j<=COLUMNAS;j++)
   matriz[i][j]=0;
}

void crear_comida()
{
 int fil,column,bien;
 do{
  bien=SI;
  fil=random(LINEAS-3);
  column=random(COLUMNAS-1);
  if(matriz[column][fil]!=0) bien=NO;
   else
    if(!(fil>=2 && fil<=LINEAS-2)) bien=NO;
     else
      if(!(column>=3 && column<=COLUMNAS-1)) bien=NO;
 }while(bien);
 crearpunto(column,fil,COMIDA);
}

void main()
{
  int ciclo=0;
  int fila,columna,t;
  randomize();
  inicializarmatriz();
  textbackground(FONDO);textmode(C40);
  for(fila=1;fila<=LINEAS-1;fila++)
   for(columna=1;columna<=COLUMNAS;columna++)
    if(((fila==1)||(fila==LINEAS-1))||((columna==2)||(columna==COLUMNAS)))
     crearpunto(columna,fila,BLUE);
  _setcursortype(_NOCURSOR);
  crear_comida();
  gotoxy(4,2); estajugando=SI;
  while (t!=char(27))
  {
   if(t==ARRIBA || t==ABAJO || t==IZQUIERDA || t==DERECHA)
     direccion=ValidarDireccion(t);
   do{
   if(ciclo==15){
     ciclo=0;MoverSerpiente();}
   delay(10);
   ciclo++;}while(!kbhit());
   t=getch();
  }
}

int ValidarDireccion(int nuevadireccion)
{
 int nueva=direccion;
 if(nuevadireccion==ARRIBA) if(direccion!=ABAJO) nueva=nuevadireccion;
 if(nuevadireccion==ABAJO) if(direccion!=ARRIBA) nueva=nuevadireccion;
 if(nuevadireccion==IZQUIERDA) if(direccion!=DERECHA) nueva=nuevadireccion;
 if(nuevadireccion==DERECHA) if(direccion!=IZQUIERDA) nueva=nuevadireccion;
 return(nueva);
}

int EsComida(int columna,int fila)
{
 int valor=NO;
 if(matriz[fila][columna]==COMIDA)valor=SI;
 return(valor);
}


void CopiarUltimoMovimiento(int x,int y)
{
 int i;
 crearpunto(serpiente.cuerpo[serpiente.tamano-1].x,serpiente.cuerpo[serpiente.tamano-1].y,FONDO);
 for(i=serpiente.tamano-1;i>0;i--)
 {
   serpiente.cuerpo[i].x=serpiente.cuerpo[i-1].x;
   serpiente.cuerpo[i].y=serpiente.cuerpo[i-1].y;
 }
 serpiente.cuerpo[0].x=x;
 serpiente.cuerpo[0].y=y;
}

void MoverSerpiente()
{
 int fila=wherey(),columna=wherex()-1,comida=NO;
 int anteriorX=wherex()-1,anteriorY=wherey();
 textbackground(FONDO);
 gotoxy(1,25);cprintf(" PUNTOS= %d",serpiente.tamano-1);
 gotoxy(columna,fila);
 CopiarUltimoMovimiento(columna,fila);
 if(direccion==DERECHA) columna++;
 if(direccion==IZQUIERDA) columna--;
 if(direccion==ARRIBA) fila--;
 if(direccion==ABAJO) fila++;
 if(EsComida(columna,fila)==SI){
   comida=SI;
   serpiente.tamano++;
   crear_comida();
 }
 crearpunto(columna,fila,GREEN);
 if(comida==54) crearpunto(anteriorX,anteriorY,GREEN);
}

void creditos()
{
  textcolor(GREEN);
  gotoxy(5,10);cprintf("Hecho por Ricardo Martinez");
  gotoxy(5,12);cprintf("E-mail: r1cardo_mt@hotmail.com");
  getch();
}

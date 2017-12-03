#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{   
    int B=0;
    float A=0,C=0;
    
    printf("Escoja el planeta en el cual quiere calcular el tiempo que se demora en llegar la luz del sol:"); printf("\n\t");
    printf(    "\n\t1. Mercurio"    );
    printf(    "\n\t2. Venus"    );
    printf(    "\n\t3. Tierra"    );
    printf(    "\n\t4. Marte"    );
    printf(    "\n\t5. Jupiter"    );
    printf(    "\n\t6. Saturno"    );
    printf(    "\n\t7. Urano"    );
    printf(    "\n\t8. Neptuno"    );
    printf(    "\n\t9. Pluton"    ); 
    printf("\n\t");
    printf("\n\t");
    scanf("%d",&B);
    printf("\n\t");
    
    if(B==1)
    {
             printf("El tiempo de llegada de la luz del Sol a Mercurio es de:"); printf("3 minutos y 21 segundos"); printf("\n\t");
             }
    if(B==2)
    {
             printf("El tiempo de llegada de la luz del Sol a Venus es de:"); printf("6 minutos"); printf("\n\t");
             }
    if(B==3)
    {   
             printf("El tiempo de llegada de la luz del Sol a la Tierra es de:"); printf("8 minutos y 19 segundos"); printf("\n\t");  
             }
    if(B==4)
    {  
             printf("El tiempo de llegada de la luz del Sol a Marte es de:"); printf("11 minutos y 40 segundos"); printf("\n\t"); 
             }
    if(B==5)
    {
             printf("El tiempo de llegada de la luz del Sol a Jupiter es de:"); printf("43 minutos y 9 segundos"); printf("\n\t"); 
             }
    if(B==6)
    {
             printf("El tiempo de llegada de la luz del Sol a Saturno es de:"); printf("%f",C); printf("Minutos Luz"); printf("\n\t");
             }
    if(B==7)
    {
             printf("El tiempo de llegada de la luz del Sol a Urano es de:"); printf("2 horas 30 minutos y 50 segundos"); printf("\n\t"); 
             }
    if(B==8)
    {
             printf("El tiempo de llegada de la luz del Sol a Neptuno es de:"); printf("4 horas y 15 minutos"); printf("\n\t"); 
             }
    if(B==9)
    {
             printf("El tiempo de llegada de la luz del Sol a Pluton es de:"); printf("5 horas 27 minutos y 13 segundos"); printf("\n\t");  
             }
    
    getch(); 

    system("PAUSE");
    return EXIT_SUCCESS;
}

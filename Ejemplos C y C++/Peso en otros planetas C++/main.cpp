#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{   
    int B=0;
    float A=0,C=0;
    printf(    "\n\tIngrese su peso en Kg\n\t"    ); 
    printf("\n\t");
    scanf("%f",&A);
    printf("\n\t");
    printf("Escoja el planeta en el cual quiere calcular su peso");
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
             C=(A/9.79)*(2.78);
             printf("Su peso en Mercurio es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==2)
    {
             C=(A/9.79)*(8.87);
             printf("Su peso en Venus es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==3)
    {
             C=(A*1);
             printf("Su peso en La Tierra es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==4)
    {
             C=(A/9.79)*(3.72);
             printf("Su peso en Marte es:"); printf("%f",C); printf("Kg"); 
             }
    
    if(B==5)
    {
             C=(A/9.79)*(22.88);
             printf("Su peso en Jupiter es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==6)
    {
             C=(A/9.79)*(9.05);
             printf("Su peso en Saturno es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==7)
    {
             C=(A/9.79)*(7.77);
             printf("Su peso en Urano es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==8)
    {
             C=(A/9.79)*(11);
             printf("Su peso en Neptuno es:"); printf("%f",C); printf("Kg"); 
             }
    if(B==9)
    {
             C=(A/9.79)*(0.4);
             printf("Su peso en Pluton es:"); printf("%f",C); printf("Kg"); 
             }
    
    getch(); 

    system("PAUSE");
    return EXIT_SUCCESS;
}

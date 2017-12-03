#include <stdio.h>
#include <cstdlib> 
#include <iostream>


void Octal( int x)
{ 
     
     if( x != 0 ){ 
         Octal(x/8);
         printf("%d",x%8);
         } 
          
}  
int main()
{ 
    
  int num;  
  printf("\nIntroduzca un numero entero: "); 
  scanf("%d",&num); 
  Octal(num); 
  printf("\n"); 
             
  system ("pause");
  return 0;
                          
}  

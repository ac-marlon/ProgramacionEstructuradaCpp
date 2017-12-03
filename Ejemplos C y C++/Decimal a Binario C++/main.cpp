#include <conio.h> 
#include <stdio.h> 


int main() 
{ 
  int z,x,n,coc,n2=0; 
  int nn2[50]; 
  nn2[0]=0; 
  printf("\n\tConversion de decimal a binario\n\t" ); 
  printf("\n\tIntrodusca el numero para convertir a binario:\n\t" );
  printf("\n\t"); 
  scanf("%lu",&n);
  printf("\n\tEl numero en binario queda asi:\n\t");     
  printf("\n\t");      

  for(x=0;x<50;x++){ 
      nn2[x]=n%2; 
      n=n/2; 
      
      if(n==0){
               break;
               } 
      } 
      
  for(z=x;z>=0;z--){
      printf("%d",nn2[z]); 
  } 
  getch(); 
} 

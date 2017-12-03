#include <iostream> 
 
using namespace std;  
  
int main()  
{  
    
   int n1,n2,contador=0;  
   cout << "Ingrese el limite inferior: ";  
   cin >> n1;  
   cout << "Ingrese el limite superior: ";  
   cin >> n2;  
   cout << "Los numeros entre el rango dado: ";  
   n1++;  
   while(n1 < n2){  
            if(n1%1 == 0){  
                    cout << n1 << " ";  
                    contador++;  
                    }  
               n1++;  
            }  
            
   cout << "\nEn total hay " << contador <<" numeros "<<endl;
   cout << "\n\t" <<
   
   system("PAUSE"); 
   return 0; 
    
}  

#include <cstdlib>
#include <iostream>

int mcd1_rec (int m, int n)
{
	int r;
	r=m%n;
	if (r==0)
		return(n);
	else 
		return(mcd1_rec(n,r));
}

using namespace std;

int main(int argc, char *argv[])
{
    int m, n;
    printf("...::PROGRAMA PARA HALLAR EL MCD DE DOS NUMEROS DE FORMA RECURSIVA::...");
    printf("\nIntroduzca dos numeros positivos:\n");
    scanf("%d%*c%d%*c",&m, &n);
    
    if((m<=0)||(n<=0))
        printf("\nError: Hay algun dato negativo\n");
    else
        printf("\nEl MCD es: %d.\n ", mcd1_rec(m,n));
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <math.h>
int main()
{
  int n = 2;
  int b = 5;
  printf("Resultado: %.0f", pow(b,n));
  return 0;
}


--------------------------------------
  Paulo:

#include <stdio.h>
#include <math.h>
int main()
{

	int num, exp, elevado;
	
	printf("Informe o valor de b: ");
	scanf("%i", &num);
	printf("\nInforme um valor inteiro e maior que 1 para n: ");
	scanf("%i", &exp);
	
	elevado = pow(num, exp);
	
	printf("\n%i elevado a %i eh: %i",num,exp,elevado);
	
	return 0;
}

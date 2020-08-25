#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n1, n2, result, opc;
	
	printf("Digite um numero");
	scanf("%d", &n1);
	
	printf("Digite outro numero");
	scanf("%d", &n2);	
	
	printf("Digite 1-soma 2-subtracao 3-multiplicacao 4-divisao");
	scanf("%d", &opc);
	
	

	if (opc == 1) 
	{	
		printf("%d + %d = %d.\n", n1, n2, (n1 + n2));
	}
	else 
	{
	    if (opc == 2)
		{
			printf("A subtracao dos valores eh: %d.\n", (n1 - n2));		
		}
		else 
		{
			if (opc == 3)
				printf("A multiplicacao dos valores eh: %d.\n", (n1 * n2));	
			else 
				{
					if (opc == 4)
						printf("A divisao dos valores eh: %d.\n", (n1 / n2));	
				}
		}
	}
}

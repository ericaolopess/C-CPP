#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float n1, n2, result ;
	int sair, opc;
	
	sair = 0;
	
	//faça enquanto - estrutura de repetição
	while(sair==0)
	{
	
		printf("Digite um numero");
		scanf("%f", &n1);
		
		printf("Digite outro numero");
		scanf("%f", &n2);	
		
		printf("Digite 1-soma 2-subtracao 3-multiplicacao 4-divisao");
		scanf("%d", &opc);
		
		
		switch(opc)
		{
			case 1:
				printf("A soma dos valores eh %f.\n", n1, n2, (n1 + n2));
				break;
			case 2:
				printf("%f - %f = %f .\n", n1, n2, (n1 - n2));
				break;
			case 3:
				printf("%f * %f = %f\n", n1, n2, (n1 * n2));
				break;
			case 4:
				printf("%f / %f = %.2f\n", n1, n2, (n1 / n2));
				break;
			default:	
				printf("Opcao Invalida!!!");
		}
		
		printf("Deseja realizar outra operacao? (0-sim/9-nao)");
		scanf("%d", &sair);
				
	}
}

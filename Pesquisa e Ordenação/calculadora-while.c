#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n1, n2, result, opc;
	int sair;
	
	sair = 0;
	
	//faça enquanto - estrutura de repetição
	while(sair==0)
	{
	
		printf("Digite um numero");
		scanf("%d", &n1);
		
		printf("Digite outro numero");
		scanf("%d", &n2);	
		
		printf("Digite 1-soma 2-subtracao 3-multiplicacao 4-divisao");
		scanf("%d", &opc);
		
		
		switch(opc)
		{
			case 1:
				printf("A soma dos valores eh %d.\n", n1, n2, (n1 + n2));
				break;
			case 2:
				printf("%d - %d = %d.\n", n1, n2, (n1 - n2));
				break;
			case 3:
				printf("%d * %d = %d.\n", n1, n2, (n1 * n2));
				break;
			case 4:
				printf("%d / %d = %d.\n", n1, n2, (n1 / n2));
				break;
			default:	
				printf("Opcao Invalida!!!");
		}
		
		printf("Deseja realizar outra operacao? (0-sim/9-nao)");
		scanf("%d", &sair);
		
		
	}
	

}

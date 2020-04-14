#include <stdio.h>
#include <stdlib.h>


int main(void) {

float a, b;
int opera, sair;

char nome[20];

printf("Digite um nome");
gets(nome);

printf("Boa noite %s. \n", nome);
printf("Boa noite ");
puts(nome);


	while(sair!=1)
	{
	
		printf("Digite o primeiro valor:");
		scanf("%f", &a);
		
		printf("Digite o segundo valor:");
		scanf("%f", &b);
		
		printf("Digite: \n		1-Soma \n		2-Subtracao \n		3-Multiplicacao \n		4-Divisao\n");
		scanf("%d", &opera);
		
		switch(opera)
		{
			case 1:
				printf("Soma: %.2f", (a+b));
				break;
			case 2:
				printf("Subt: %.2f", (a-b));
				break;
			case 3:
				printf("Mult: %.2f", (a*b));
				break;
			case 4:
				printf("Div: %.2f", (a/b));
				break;
			default:
				printf("Operador Inválido!!!");
		}
		
		printf("\n Deseja realizar outra operacao? (1-nao/0-sim) ");
		scanf("%d", &sair);

		
	}

}





#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num1, num2, result, opera;



int soma()
{
	result = (num1+num2);
	return (result);
	
}

int subtracao();

int calculadora()
{

	num1 = 0;
	num2 = 0;
	opera = 0;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero:");
	scanf("%d", &num2);
	
	
	printf("Digite: \n 1 - Soma \n 2 - Subtracao");
	scanf("%d", &opera);
	
	switch(opera)
	{
		case 1:
			soma();
			break;	
		case 2:
			subtracao();
			break;	
		case 3:
			printf("mult: %d", (num1*num2));
			break;	
		case 4:
			printf("div: %d", (num1/num2));
			break;	
		default:
			printf("Operacao invalida!!!!");
	}
	
	printf("resultado: %d \n ", result);
}

int main(int argc, char *argv[]) {
	
	int resp=0;
	
	while(resp==0)
	{
		calculadora();
		printf("Deseja realizar outra operação: (0-sim/-nao)");
		scanf("%d", &resp);
	}
	
	return 0;
}

int subtracao()
{
	printf("subtracao: %d", (num1-num2));
	
}




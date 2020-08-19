#include <stdio.h>
#include <stdlib.h>

//VARIAVEIS GLOBAIS
float Num1, Num2, Resp;


void Entrada()
{
	printf("Digite um numero: ");
	scanf("%f", &Num1);
			
	printf("Digite outro numero: ");
	scanf("%f", &Num2);
}

float Adicao()
{
	Resp = Num1 + Num2;
	return(Resp);	
}

float Subtracao()
{
	Resp = Num1 - Num2;
	return(Resp);	
}

float Multiplicacao()
{
	Resp = Num1 * Num2;
	return(Resp);	
}

float Divisao()
{
	Resp = Num1 / Num2;
	return(Resp);	
}


int main(void) {

int opera = 0;

while(opera != 5)
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	
	printf("\n						1 - Adicao");
	printf("\n						2 - Subtracao");
	printf("\n						3 - Multiplicacao");
	printf("\n						4 - Divisao");
	printf("\n						5 - Sair");
	
	printf("\n\n");
	
	printf("\n						Escolha uma opcao: ");
	scanf("%d", &opera);

	switch(opera)
	{
		case 1:
		{
			printf("******** SOMA ********\n\n");
			
			Entrada();
			Adicao();
			
			printf("O resultado eh: %.2f \n", Resp);
			
			system("pause");
			
			break;
		}
		
		case 2:
		{
			printf("******** SUBTRACAO ********\n\n");
			Entrada();
			Subtracao();
			
			printf("O resultado eh: %.2f.", Resp);
			
			getch();
			
			break;
		}
		
		case 3:
		{
			printf("******** MULTIPLICACAO ********\n\n");
			Entrada();
			Multiplicacao();
			
			printf("O resultado eh: %.2f.", Resp);
			
			getch();
			
			break;
		}
		
		case 4:
		{
			printf("******** DIVISAO ********\n\n");
			Entrada();
			Divisao();
			
			printf("O resultado eh: %.2f.", Resp);
			
			getch();
			
			break;
		}	
		
		case 5:
		{
			
			break;
		}
		default:
		{
			printf("					*************** OPCAO INVALIDA !!!!!!!!!! ***************");
			
			getch();
		}
		
		
	}

}

}



#include <stdio.h>
#include <stdlib.h>

/* Faça um Programa que leia a receita e a despesa de uma empresa
 e apresente se ela está com LUCRO ou com PREJUÍZO.  */

int main(int argc, char *argv[]) {
	
	float receita, despesa;
	
	printf("Receita: ");
	scanf("%f", &receita);
	
	printf("Despesa: ");
	scanf("%f", &despesa);
	
	if(receita > despesa)
		printf("LUCRO");
	else
		printf("PREJUIZO");	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Faça um Programa que leia um número e escreva “maior do que 100”, 
 se o número digitado for maior que 100 e escreva “menor do que 100”,
 se o número for menor do que 100.*/

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if (a>100)
		printf("maior do que 100");
	else
		printf("menor do que 100");
			
	return 0;
}

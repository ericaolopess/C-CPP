#include <stdio.h>
#include <stdlib.h>

/* Fa�a um Programa que leia um n�mero e escreva �maior do que 100�, 
 se o n�mero digitado for maior que 100 e escreva �menor do que 100�,
 se o n�mero for menor do que 100.*/

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

#include <stdio.h>
#include <stdlib.h>

/* Faça um Programa que leia dois números e apresente o sinal do produto entre eles. 
   Considere que somente números diferentes de zero serão digitados.    */

int main(int argc, char *argv[]) {
	
	float n1, n2;
	
	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("O produto dos dois numeros eh %.2f", (n1*n2));
	printf("\n%.2f * %.2f = %.2f", n1, n2, (n1*n2));
		
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Fa�a um Programa que leia dois n�meros e apresente o sinal do produto entre eles. 
   Considere que somente n�meros diferentes de zero ser�o digitados.    */

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

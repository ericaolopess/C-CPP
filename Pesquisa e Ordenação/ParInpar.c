#include <stdio.h>
#include <stdlib.h>

/* Faça um Programa que leia um número inteiro. Informar se o número é “PAR” ou “ÍMPAR”. */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero%2 == 0) 
	{
    	printf("Numero PAR\n");
  	} 
	else 
	{
    printf("Numero IMPAR\n");
  	}
	
}





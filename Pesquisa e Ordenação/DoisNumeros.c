#include <stdio.h>
#include <stdlib.h>

/* Faça um Programa que leia dois números quaisquer, e escreva o maior deles.*/

int main(int argc, char *argv[]) {
	int n1, n2; //criar as variáveis
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	if (n1>n2)
	{
		printf("O numero maior e %d.", n1);
	}
	else if(n2 > n1) 
		{
	    	printf("Numero maior digitado foi: %d\n", n2);
	    } 
		else 
		{
	    	printf("Numeros iguais\n");
	 	}
}

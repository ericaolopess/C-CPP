#include <stdio.h>
#include <stdlib.h>

/* Fa�a um Programa que leia um n�mero inteiro. Informar se o n�mero � �PAR� ou ��MPAR�. */

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





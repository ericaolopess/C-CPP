/*Fa�a um Programa que leia um n�mero e escreva �maior do que 100�, 
se o n�mero digitado for maior que 100 e escreva �menor do que 100�, 
se o n�mero for menor do que 100.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num >= 100)
		printf("maior/igual do que 100");
	else
		printf("menor do que 100");	
}








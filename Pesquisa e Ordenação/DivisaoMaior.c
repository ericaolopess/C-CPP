#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/* Faça um Programa que leia dois números quaisquer, e escreva o resultado 
  do cálculo do maior dividido pelo menor.  */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, ""); //Deixa usar a acentuação
	
	bool rep = true;
	
	while(rep)
	{
		system("cls");
		int n1, n2, resultado;
		
		printf ("Digite o primeiro número: ");
		scanf ("%d", &n1);
		printf ("Digite o segundo número: ");
		scanf ("%d", &n2);
			
		if (n1 > n2) 
		{
			resultado = n1 / n2;
			printf ("\nO resultado do maior número divido pelo menor é: %d", resultado);
		} else 
		{
			resultado = n2 / n1;
			printf ("\nO resultado do maior número divido pelo menor é: %d", resultado);
		}
		
		printf ("\nVocê deseja continuar? SIM-1 NÃO-0\n\n");
		scanf ("%i", &rep);
		

	}

}



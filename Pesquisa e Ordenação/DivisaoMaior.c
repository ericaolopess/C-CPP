#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/* Fa�a um Programa que leia dois n�meros quaisquer, e escreva o resultado 
  do c�lculo do maior dividido pelo menor.  */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, ""); //Deixa usar a acentua��o
	
	bool rep = true;
	
	while(rep)
	{
		system("cls");
		int n1, n2, resultado;
		
		printf ("Digite o primeiro n�mero: ");
		scanf ("%d", &n1);
		printf ("Digite o segundo n�mero: ");
		scanf ("%d", &n2);
			
		if (n1 > n2) 
		{
			resultado = n1 / n2;
			printf ("\nO resultado do maior n�mero divido pelo menor �: %d", resultado);
		} else 
		{
			resultado = n2 / n1;
			printf ("\nO resultado do maior n�mero divido pelo menor �: %d", resultado);
		}
		
		printf ("\nVoc� deseja continuar? SIM-1 N�O-0\n\n");
		scanf ("%i", &rep);
		

	}

}



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float soma;
	int i;
	float notas[4];

	for(i=0; i<4; i++)
	{
		//receber valores que ser�o inseridos no vetor
		printf("Digite a nota %d: ", i+1);
		scanf("%f", &notas[i]);
		
		//soma dos valores existentes no vetor
		soma = soma + notas[i];	
	}
	//exibir a m�dia dos valores existentes mo vetor
	printf("A m�dia das notas � %.2f: ", (soma/4));
	
}

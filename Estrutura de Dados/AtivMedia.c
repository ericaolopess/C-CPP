#include <stdio.h>
#include <stdlib.h>

/* 
Fa�a um Programa que leia 4 notas escolares de um aluno. Calcule e apresente a m�dia. 
Sabendo-se que a m�dia de aprova��o da escola � 7, apresente a informa��o se o aluno 
foi APROVADO ou REPROVADO.
 */

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	
	printf("Digite a nota 1:");
	scanf("%f", &n1);

	printf("Digite a nota 2:");
	scanf("%f", &n2);

	printf("Digite a nota 3:");
	scanf("%f", &n3);
	
	printf("Digite a nota 4:");
	scanf("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	if(media < 7)
	{
		printf("Media: %5.1f", media);
		printf("\nSe ferrou kkk Reprovou!!!");
	}
	else
	{
		printf("Aprovado!!!");
	}
	
}

#include <stdio.h>
#include <stdlib.h>

/* Fa�a um Programa que leia 4 notas escolares de um aluno. Calcule e 
   apresente a m�dia. Sabendo-se que a m�dia de aprova��o da 
   escola � 7, apresente a informa��o se o aluno foi APROVADO ou REPROVADO.   */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, media;
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
		
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	printf("Nota 4: ");
	scanf("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	if(media >= 7)
		printf("APROVADO");
	else
		printf("REPROVADO");
		
	return 0;
}

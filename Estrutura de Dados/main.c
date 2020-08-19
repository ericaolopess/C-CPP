#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palavras[50];
	char lacuna [50];
	char letra [50];
	char resposta; 
	int tentativas[10]; 
	int tamanho, i;
	
	printf("Digite a palavra secreta: ");
	gets(palavras);
	
	system("cls");

	//montar as lacunas
	
	tamanho = strlen(palavras);
	printf("%d", tamanho);
	
	for (i=0; i < tamanho; i++)
	{
		lacuna[i]="_ ";
		printf("_ "); 	
	}

	return 0;
}

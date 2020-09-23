#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	char nome[40];
	
	puts("Digite seu nome: ");
	//scanf("%s", &nome);
	gets(nome);
	
	printf("Boa noite, %s.", nome);
	
	getch();
	
}

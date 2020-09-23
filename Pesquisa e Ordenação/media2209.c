#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {	
	setlocale (LC_ALL, "");
	int max;
	printf("Digite a quantidade de notas: ");
	scanf("%d", &max);
	
	int notas[max], i, media, soma = 0;
	
	for(i=0; i < max; i++){
		printf("Digita a nota %d: ", (i+1));
		scanf("%d", &notas[i]);
		soma = soma + notas[i];
	}
	media = soma/max;
	
	printf("A soma das notas é: %d\n", soma);
	printf("A sua média é: %d", media);
}




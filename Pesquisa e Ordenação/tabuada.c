#include <stdio.h>
#include <locale.h>

/* Tabuada */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, ""); 
	
	int resp = 0;	
	int i, num;
	
	printf("Digite um numero da tabuada que deseja: ");
	scanf("%d", &num);
	
	for(i=0; i<= 20; i++)
	{
		resp = i * num;
		printf("%d x %d = %d\n", i, num, resp);
	}

}




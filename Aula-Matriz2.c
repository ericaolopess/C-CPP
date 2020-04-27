#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS 3
#define COLUNAS 4

int main(int argc, char *argv[]) {
	
	int matriz [LINHAS][COLUNAS];
	int i, j, soma;
	
	soma = 0;
	
	//recebe os dados
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Digite um valor para Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//print os dados na tela e exibi a soma
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Matriz[%d][%d]: %d - ", i, j, matriz[i][j]);	
			
			if (matriz[i][j] == 0)
			{
				soma++;	
		    }
		}
		printf("\n");		
	}
	
	printf("A quantidade de zeros na matriz eh: %d.", soma);
}

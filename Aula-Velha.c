#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS 3
#define COLUNAS 3

int main(int argc, char *argv[]) {
	
	int tabuleiro [LINHAS][COLUNAS];
	int i, j;
	int jogada, pos;
	
	
	
	printf ("___|___|___\n");
	printf ("___|___|___\n");
	printf ("   |   |   \n\n\n\n");
	
	printf ("Escolha a posição da jogada de acordo com o tabuleiro abaixo.\n\n\n");
	
	printf (" 1 | 2 | 3 \n");
	printf (" 4 | 5 | 6 \n");
	printf (" 7 | 8 | 9 \n\n\n\n");
	
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	
	/*recebe os dados
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
	*/
}

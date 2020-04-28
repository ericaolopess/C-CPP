#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS 3
#define COLUNAS 3

int main(int argc, char *argv[]) {
	
	int tabuleiro [LINHAS][COLUNAS];
	int i, j;
	int jogadas, pos;
	
	//inicializa o tabuleiro
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			tabuleiro[i][j] = 0;
		}
	}
	
	// só pode ser exibido 1 vez
	printf ("___|___|___\n");
	printf ("___|___|___\n");
	printf ("   |   |   \n\n\n\n");
	
	//inicializa jogadas
	jogadas =0;

	
	while(jogadas < 9)
	{
		printf ("Escolha a posição da jogada de acordo com o tabuleiro abaixo.\n\n\n");
	
		printf (" 1 | 2 | 3 \n");
		printf (" 4 | 5 | 6 \n");
		printf (" 7 | 8 | 9 \n\n\n\n");
		
		printf("Digite a posicao: ");
		scanf("%d", &pos);
	
		switch (pos)
		{
			case 1:
				tabuleiro[0][0] = 1;
				break;
			case 2:
				tabuleiro[0][1] = 1;
				break;
			case 3:
				tabuleiro[0][2] = 1;
				break;
	
			case 4:
				tabuleiro[1][0] = 1;
				break;
			case 5:
				tabuleiro[1][1] = 1;
				break;
			case 6:
				tabuleiro[1][2] = 1;
				break;
				
			case 7:
				tabuleiro[2][0] = 1;
				break;
			case 8:
				tabuleiro[2][1] = 1;
				break;
			case 9:
				tabuleiro[2][2] = 1;
				break;
			default:
				printf("Digite uma posição valida!!!");
		}
		
		printf (" %d | %d | %d \n", tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
		printf (" %d | %d | %d \n", tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
		printf (" %d | %d | %d \n\n\n\n", tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
		
		jogadas++;
		
	}
	
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

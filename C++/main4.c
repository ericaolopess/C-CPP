#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define RED     	"\x1b[31m"
#define YELLOW    	"\033[1;33m"
#define DARK_GRAY 	"\e[1;30m"
#define GREEN	"\e[0;32m"
#define RESET   "\x1b[0m"

int main() 
{
	char palavra[50], lacuna[50], letra[50];
	int tamanho, i, vida = 5, acertos = 0;
	bool acertou = false, continuar = true;
	
	//Verifica se o jogador deseja jogar novamente
	while(continuar == true)
	{
		
		//Obtem a palavra secreta
		printf("Digite uma palavra:");
		gets(palavra);
		tamanho = strlen(palavra);
		
		for(i=0;i<tamanho; i++)
		{
			lacuna[i] = "-";
		}
		system("cls");
		
		//Verifica se o jogo já foi iniciado ou irá ser iniciado novamente
		while(tamanho != 0 && continuar == true)
		{
			
			//Verifica se o jogador não ganhou ou perdeu
			if(acertos != tamanho && vida > 0)
			{
				//Obtem a letra da rodada
				acertou = false;
				printf("%s \n"RESET, lacuna);
				printf(GREEN"[RODADA]"RESET"Digite uma letra:");
				scanf("%s", &letra[0]); //ao receber como caracter a verificação é executada 2x
				//scanf("%c", &letra[0]);
				//Obtem o tamanho do array
				for(i=0;i < tamanho; i++)
				{
					if (palavra[i] == letra[0])
					{
						lacuna[i] = letra[0];
						acertou = true;
						acertos++;
					}
					//printf("[DEBUG] Palavra: %c | Letra: %c\n", palavra[i], letra);
				}
				
				//Subtração da vida ao errar
				if(acertou == false)
					vida--;
				
				printf(DARK_GRAY"[INFO]"GREEN"Acertos: %d"RESET" | "RED"Vidas: %d \n"RESET, acertos, vida);
			}
			
			else
			{
				int opcao;
				
				//Derrota
				if(vida == 0)
				{
					printf(DARK_GRAY"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"RESET);
					printf(RED"[DERROTA]"RESET"Xiiii voce perdeu, deseja jogar novamente ?"RESET"["RED"0-Nao"RESET"/"GREEN"1-Sim"RESET"]\n");
					printf(GREEN"[RESPOSTA]"RESET"A Palavra secreta era "YELLOW"%s \n"RESET,palavra);
					scanf("%d",&opcao);
				}
				
				//Vitoria
				else
				{
					printf(DARK_GRAY"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"RESET);
					printf(GREEN"[VITORIA]"RESET"Parabens voce ganhou, deseja jogar novamente ?"RESET"["RED"0-Nao"RESET"/"GREEN"1-Sim"RESET"]\n");
					printf(GREEN"[RESPOSTA]"RESET"A Palavra secreta e "YELLOW"%s \n"RESET,palavra);
					scanf("%d",&opcao);
				}
				
				//Opcões de retorno ao game
				if(opcao == 0)
					continuar = false;
				else
				{
					tamanho = 0;
					vida = 5;
					acertos = 0;
				}
			}	
		}
	}
}

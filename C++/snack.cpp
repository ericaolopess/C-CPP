#include <stdio.h> 

main () {
	
	int resp;
	
	while(resp!=1)
	{
		char palavra[50];
		char lacuna[50];
		char letra;
		int chutes, vida, i, acertou, chances = 5;
		
		
		
		
		printf ("FFFFFFFF OOOOOOOO RRRRRRRR CCCCCCCC AAAAAAAA\n"); 
		printf ("FF       00    00 RR    RR CC       AA    AA\n"); 
		printf ("FFFFFFFF 00    00 RRRRRRR  CC       AAAAAAAA\n"); 
		printf ("FF       00    00 RR  RR   CC       AA    AA\n"); 
		printf ("FF       00000000 RR    RR CCCCCCCC AA    AA\n\n"); 
		
		printf ("Digite a palavra a ser descoberta: \n"); 
		gets(palavra);
		
		for (i=0; i<strlen(palavra); i++) {
			lacuna[i] = "-";
		} 
		
		system("cls");
		
		printf ("FFFFFFFF OOOOOOOO RRRRRRRR CCCCCCCC AAAAAAAA\n"); 
		printf ("FF       00    00 RR    RR CC       AA    AA\n"); 
		printf ("FFFFFFFF 00    00 RRRRRRR  CC       AAAAAAAA\n"); 
		printf ("FF       00    00 RR  RR   CC       AA    AA\n"); 
		printf ("FF       00000000 RR    RR CCCCCCCC AA    AA\n\n"); 
		
		
		for (i=0; i<strlen(palavra); i++) {
			printf ("%c", lacuna[i]);
		}
		acertou = 0;
		
		while (acertou <strlen(palavra) && chances>0)
		{
			printf ("\n Digite uma letra: \n");
			scanf ("%c", &letra);
			fflush(stdin);
			
			vida=0;
			
			for (i=0; i<strlen(palavra); i++) {
				if (letra == palavra[i]) {
					lacuna[i] = letra;
					acertou ++;	
					vida = 1;	
				}
			}
			
			if (vida!=1)
			{	
						chances--;
						printf("Voce errou! voce tem %d.\n",chances);								
			}
			
			for (i=0; i<strlen(palavra); i++) {
				printf ("%c", lacuna[i]);
			}
		} 
		
		if(chances==0)
		{
			printf("\n\n Voce perdeu!! kkkk \n",chances);
		}
		else
		{
			printf("\n\n PARABENSSSSSSSS!! \n",chances);
		}	
	
		printf ("Deseja jogar novamente?? (0-Sim / 1-Nao) \n");
		scanf ("%d", &resp);
		fflush(stdin);
	
	}
		
		
	
	
}


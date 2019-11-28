#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void tela (char var1[3][3]){
    system("cls");
    printf("	1   2   3 \n");
    printf("1  %c |  %c |  %c  \n",var1[0][0],var1[0][1],var1[0][2]);
    printf("   ----------- \n");
    printf("2  %c |  %c |  %c  \n",var1[1][0],var1[1][1],var1[1][2]);
    printf("   ----------- \n");
    printf("3  %c |  %c |  %c  \n",var1[2][0],var1[2][1],var1[2][2]);
}

int main () {
    

    char var2[3][3] = { {'1','2','3'},   	 
   					  {'4','5','6'},
   					  {'7','8','9'}, };
    char jogarN;
    int jogadas,l,c, turno = 0,i,j,verificar = 1;
    
    do{
   	 jogadas = 1;
   	 for(i=0 ; i <=2; i++){
   		 for(j=0;j<=2;j++){
   			 var2[i][j] = ' ';
   		 }
   	 }
   		 do{   	 	 
   	     	tela(var2);
   	    	 
   	    	 
   			 if(turno%2==0){
   				 printf("Jogador 1 \n");
   			 } else {
   				 printf("Jogador 2 \n");
   			 }   			 	 
   			 printf("Digite a linha :");
   		  	scanf("%i",&l);
   		 	printf("Digite a coluna :");
   			  scanf("%i",&c);
   			       if (l < 1 ||c < 1 || l > 3 || c > 3){
   			           
   			       system("cls");
   			       printf("Voce digitou um numero invalido! \n");
   			       printf("Precione qualque tecla para digirar outro valor \n");
   			       getch();
   			       system("cls");
   				   } else if (var2 [l-1][c-1] != ' '){
   				  	 
   				   printf(" Campo j?? preenchido \n");
   				   
   				   }else{
   				  	 if (turno%2==0){
   				  		 var2 [l - 1][c - 1] = 'X';
   					   }else {
   					  	 var2 [l - 1][c - 1] = 'O';
   					   }
   					   turno++;
   					   jogadas++;
   				   }
   				   
				   if(casas[0][0] == 'X' && casas[0][1] == 'X' && casas[0][2] == 'X')
				   			{contaJogadas = 11;}
				   			
            if(casas[1][0] == 'X' && casas[1][1] == 'X' && casas[1][2] == 'X'){contaJogadas = 11;}
            if(casas[2][0] == 'X' && casas[2][1] == 'X' && casas[2][2] == 'X'){contaJogadas = 11;}
            if(casas[0][0] == 'X' && casas[1][0] == 'X' && casas[2][0] == 'X'){contaJogadas = 11;}
            if(casas[0][1] == 'X' && casas[1][1] == 'X' && casas[2][1] == 'X'){contaJogadas = 11;}
            if(casas[0][2] == 'X' && casas[1][2] == 'X' && casas[2][2] == 'X'){contaJogadas = 11;}
            if(casas[0][0] == 'X' && casas[1][1] == 'X' && casas[2][2] == 'X'){contaJogadas = 11;}
            if(casas[0][2] == 'X' && casas[1][1] == 'X' && casas[2][0] == 'X'){contaJogadas = 11;}

            if(casas[0][0] == 'O' && casas[0][1] == 'O' && casas[0][2] == 'O'){contaJogadas = 12;}
            if(casas[1][0] == 'O' && casas[1][1] == 'O' && casas[1][2] == 'O'){contaJogadas = 12;}
            if(casas[2][0] == 'O' && casas[2][1] == 'O' && casas[2][2] == 'O'){contaJogadas = 12;}
            if(casas[0][0] == 'O' && casas[1][0] == 'O' && casas[2][0] == 'O'){contaJogadas = 12;}
            if(casas[0][1] == 'O' && casas[1][1] == 'O' && casas[2][1] == 'O'){contaJogadas = 12;}
            if(casas[0][2] == 'O' && casas[1][2] == 'O' && casas[2][2] == 'O'){contaJogadas = 12;}
            if(casas[0][0] == 'O' && casas[1][1] == 'O' && casas[2][2] == 'O'){contaJogadas = 12;}
            if(casas[0][2] == 'O' && casas[1][1] == 'O' && casas[2][0] == 'O'){contaJogadas = 12;}
				  
   				   
   			 }while(jogadas<=9);
   			 tela(var2);
   			 printf("Deseja jogar novamente?  [S-N] \n");
   			 scanf("%s",&jogarN);
   		 }while (jogarN == 's');
   			   	  
}

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)
{
	setlocale (LC_ALL,"Portuguese");
    char OLD[3][3];
    char O='O', X='X', nome1[10], nome2[10];
    int t=0,j,i;

		gets(nome1);
		printf(" %s ", nome1);
	      

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            OLD[i][j]=' ';

    while(t<=9)
        {
        printf(" \nJOGO DA VELHA \n\n");
        for(i=0;i<3;i++)
        {
            printf("     %c | %c | %c\n",OLD[i][0],OLD[i][1],OLD[i][2]);
            if(i<3-1)
            {
                printf("    -----------\n");
            }
        }
		       
        
        if(t%2)printf("\n %s \nLINHA: ", &nome1);
        else printf("\nWalter \nLINHA: ");

        scanf("%d",&i);
        printf("COLUNA: ");
        scanf("%d",&j);

        if(OLD[i-1][j-1]==' ')
        {
            if(t%2)OLD[i-1][j-1]=X;
            else OLD[i-1][j-1]=O;
            t++;
        }


        if((OLD[0][0]==O && OLD[0][1]==O && OLD[0][2]==O)||
           (OLD[1][0]==O && OLD[1][1]==O && OLD[1][2]==O)||
           (OLD[2][0]==O && OLD[2][1]==O && OLD[2][2]==O)||
           (OLD[0][0]==O && OLD[1][0]==O && OLD[2][0]==O)||
           (OLD[0][1]==O && OLD[1][1]==O && OLD[2][1]==O)||
           (OLD[0][2]==O && OLD[1][2]==O && OLD[2][2]==O)||
           (OLD[0][0]==O && OLD[1][1]==O && OLD[2][2]==O)||
           (OLD[0][2]==O && OLD[1][1]==O && OLD[2][0]==O))
        {
            printf("\n\a\t\tUAU VOCÊ GANHOU WALTER, PARABÉNS!");
            break;
        }
        if((OLD[0][0]==X && OLD[0][1]==X && OLD[0][2]==X)||
           (OLD[1][0]==X && OLD[1][1]==X && OLD[1][2]==X)||
           (OLD[2][0]==X && OLD[2][1]==X && OLD[2][2]==X)||
           (OLD[0][0]==X && OLD[1][0]==X && OLD[2][0]==X)||
           (OLD[0][1]==X && OLD[1][1]==X && OLD[2][1]==X)||
           (OLD[0][2]==X && OLD[1][2]==X && OLD[2][2]==X)||
           (OLD[0][0]==X && OLD[1][1]==X && OLD[2][2]==X)||
           (OLD[0][2]==X && OLD[1][1]==X && OLD[2][0]==X))
        {
            printf("\n\n\a\t\tUAU VOCÊ GANHOU THAÍS, PARABÉNS! ");
            break;
        }

        if(t==9)
        {
            printf("ERROOOUU HAHA! LOOSER.");
            break;
        }

    }
    getch();
    return(0);
}


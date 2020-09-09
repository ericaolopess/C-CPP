#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void receitaDespesa();
void mediaAluno();




int main(int argc, char *argv[]) {
	
	int opc;
	
	printf("\n\n\n\n");
	printf("OPCOES \n");
	printf("1 - Receita e Despesa");
	printf("2 - Media Aluno");
	printf("\n\nDigite a Opcao: ");
	scanf("%d", &opc);
	
	switch (opc)
	{
		case 1:
			receitaDespesa();
			break;
		case 2:
			mediaAluno();
			break;
		default:
			printf("\n\nOpcao Invalida!!!!");	
	}

}


void receitaDespesa()
{
	System("cls");
	float receita, despesa;

	printf("\n Digite o valor da receita: ");
	scanf("%f", &receita);
	printf("\n Digite o valor da despesa: ");
	scanf("%f", &despesa);
	
	if(receita >= despesa)
	{
		printf("\n Voce esta com lucro de %.2f", (receita - despesa));
	}
	else
	{
		printf("\n Voce esta com prejuizo de %.2f", (receita - despesa));
	}

}

void mediaAluno()
{

	
	printf("Digite a media e aperta enter ate ter inserido as 4 \n");
	

	
}

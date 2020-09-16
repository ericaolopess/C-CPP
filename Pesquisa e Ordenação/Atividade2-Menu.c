#include <stdio.h>
#include <stdlib.h>

/* Todos os programas da Atividade 2, acessando através de um menu.*/

int MaiorMenor() 
{
	
	int a;
	
	system("cls");
	
	printf("\n\n\n\n\n\n				Maior ou Menor\n\n\n\n\n");
	printf("				Digite um numero: ");
	scanf("%d", &a);
	
	if (a>=100)
		printf("				maior do que 100");
	else
		printf("				menor do que 100");
			
	system("pause"); 
	

}

int ReceitaDespesa() {
	
	float receita, despesa;
	
	system("cls");
	
	printf("\n\n\n\n\n\n				Lucro e Prejuizo\n\n\n\n\n");
	
	
	printf("Receita: ");
	scanf("%f", &receita);
	
	printf("Despesa: ");
	scanf("%f", &despesa);
	
	if(receita > despesa)
		printf("LUCRO\n");
	else
		printf("PREJUIZO\n");	
	
	system("pause");
	return 0;
}

int Produto() {
	
	float n1, n2;
	
	system("cls");
	
	printf("\n\n\n\n\n\n				Produto\n\n\n\n\n");

	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("O produto dos dois numeros eh %.2f\n", (n1*n2));
	printf("\n%.2f * %.2f = %.2f\n", n1, n2, (n1*n2));
	system("pause");
	return 0;
}

int AprovadoReprovado() {
	
	float n1, n2, n3, n4, media;	
	
	system("cls");
	
	printf("\n\n\n\n\n\n				Aprovado ou Reprovado\n\n\n\n\n");
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
		
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	printf("Nota 4: ");
	scanf("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	if(media >= 7)
		printf("APROVADO\n");
	else
		printf("REPROVADO\n");
		
	system("pause"); 
	
	return 0;
}


int main()
{
	int continua;	
		
	while(continua != 5)
	{
		int opc;
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n");
		printf("							MENU PRINCIPAL\n\n\n\n");
		printf("				1 - Lucro e Prejuizo\n");
		printf("				2 - Aprovado ou Reprovado\n");
		printf("				3 - Sinal do Produto\n");
		printf("				4 - Maior ou Menor\n");
		printf("				5 - Sair\n\n");
		
		printf("				Digite a opcao: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1:
				ReceitaDespesa();
				break;
			case 2:
				AprovadoReprovado();
				break;
			case 3:
				Produto();
				break;
			case 4:
				MaiorMenor();
				break;
			case 5:
				continua = 5;
				break;
			default:
				printf("				Digite uma opcao valida!");
				system("pause");
		}
	}		
}





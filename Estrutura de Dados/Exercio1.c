#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float valor, taxa, tempo, prestacao;
	
	printf("Digite o valor da prestacao: ");
	scanf("%f", &valor);
	
	printf("Digite a taxa de juros: ");
	scanf("%f", &taxa);
	
	printf("Digite a qtde de dias em atraso: ");
	scanf("%f", &tempo);
	
	prestacao = valor + (valor*(taxa/100)*tempo);
	     
	printf("O valor atual da prestacao eh %.2f.", prestacao);   
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>

main()
{
	int x = 15;
	int *px;
	
	px = &x;
	
	printf("Endereco memoria variavel x = %p \n", &x);
	printf("Valor da variavel x recebida via ponteiro px = %d \n", *px);
	printf("Conteudo da variavel px = %p \n", px);
	printf("Endereco de memoria de px = %p \n", &px);
	
	system("pause");
	
}

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x = 15;
	int *huguinho;
	
	huguinho = &x;
	
	printf("Endereco de x = %p", &x);
	printf("\nConteudo de x  por meio do ponteiro px = %d", *huguinho);
	printf("\nConteudo da variavel px = %p", &huguinho);
	printf("\nEndereco de px = %p", &huguinho);

}

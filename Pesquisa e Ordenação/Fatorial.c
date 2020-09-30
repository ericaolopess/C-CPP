#include <stdio.h>
#include <conio.h>

int fat( int n)
{
	if ( n == 0 )
		return 1;
	else	
		return n * fat (n - 1);
		
}

int main(void) 
{
	int x, res;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &x);
	
	res = fat (x);
	printf("Fatorial do numero %d eh igual a %d.", x, res );
	
	getch();
	
}

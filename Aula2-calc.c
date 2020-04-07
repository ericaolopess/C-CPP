#include <stdio.h>
#include <stdlib.h>


int main(void) {

float a, b;
int opera;

printf("Digite o primeiro valor:");
scanf("%f", &a);

printf("Digite o segundo valor:");
scanf("%f", &b);

printf("Digite: 1-Soma 2-Subtracao 3-Multiplicacao 4-Divisao");
scanf("%d", &opera);

if(opera==1)
	printf("Soma: %.2f", (a+b));

if(opera==2)
	printf("Subt: %.2f", (a-b));
	
if(opera==3)
	printf("Mult: %.2f", (a*b));
	
if(opera==4)
	printf("Div: %.2f", (a/b));
}






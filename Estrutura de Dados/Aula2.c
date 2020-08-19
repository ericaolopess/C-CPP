#include <stdio.h>

int main(void) 
{
  int num1, num2;

  printf("Digite um numero:");
  scanf("%d", &num1);

  printf("Digite outro numero:");
  scanf("%d", &num2);

  if (num2 == 0)
  {
    printf("Nao existe divisao por zero.");
  }
  else
  {
    printf("O resultado da divisão eh: %d resto %d.", (num1/num2), (num1%num2));
  }
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
 
//prototipos das funcoes
void enqueue (int fila [MAX], int x);
int dequeue (int fila [MAX]);
void exibe (int fila [MAX]);
 
int final, inicio, i, n;
 
main(){
    int fila [MAX];
    inicio = 0;
    final = 0;
  
    for (i=1;i<=MAX;i++)
    {
        printf ("\n Digite o numero=");
        scanf("%d", &n);
		enqueue (fila, n);
	}
   
    dequeue (fila);
    exibe (fila);
    system ("PAUSE");
}
 
void exibe (int fila [MAX])
{
    int i;
    if (final >= 1 && inicio < final){
        for (i=inicio; i<final; i++) 
           printf ("\n fila [%d] = %d", i, fila [i]);  
    }     
    else printf ("\n Fila Vazia");
}
 
int dequeue (int fila [MAX])
{
    int x;
    if (final >= 1 || inicio < final){ 
      x = fila [inicio];
      inicio++;  
    } 
   else printf ("\n Fila Vazia");     
 
   return (x);
}
 
void enqueue (int fila [MAX], int x)
{
    if (final == MAX)
      printf ("\n Fila Cheia!");
   else{
      fila [final] = x;
      final++;
   }
}

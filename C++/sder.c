#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int final, inicio;
 
main(){
    int fila [MAX];
    inicio = 0;
    final = 0;
    enqueue (fila, 22);
    enqueue (fila, 33);
    enqueue (fila, 44);
    dequeue (fila);
    
    exibe (fila);
    system ("PAUSE");
}
 
void exibe (int fila [MAX])
{
    int i;
    if (final >= 1 && inicio < final){
        for (i=inicio; i<final+1; i++) 
           printf ("\n fila [%d] = %d", i-1, fila [i-1]);  
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

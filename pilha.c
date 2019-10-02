#include <stdio.h>
#include <stdlib.h>
#define MAX 10
 
//prototipos das funcoes
void push (int pilha [MAX], int x);
int pop (int pilha [MAX]);
void exibe (int pilha [MAX]);
 
int topo;
 
main(){
    int pilha [MAX];
    push (pilha, 22);
    push (pilha, 33);
    push (pilha, 44);
    
    printf ("\n PUSH \n");
    exibe (pilha);
    
    pop (pilha);
    
    printf ("\n POP \n");
	exibe (pilha);
    system ("PAUSE");
}
 
void exibe (int pilha [MAX])
{
     int i;
 
     if (topo >= 1){
         for (i=0; i<topo; i++) 
             printf ("\n Pilha [%d] = %d",i,pilha [i]);  
     } 
  else printf ("\n Pilha vazia");
}
 
int pop (int pilha [MAX])
{
     int x;
 
     if (topo >= 1)
     {
          x = pilha [topo - 1];
          topo--;
     }
     else printf ("\n Pilha vazia");
 
    return (x);
}
void push (int pilha [MAX], int x)
{
    if (topo == MAX)
          printf ("\n Pilha Cheia");
    else{
          pilha [topo] = x;
          topo++;
    }
}

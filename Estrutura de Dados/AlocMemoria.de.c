	
#include<stdio.h>
#include<stdlib.h>
 
main()
{
    int *vet, tam, i;
    
    printf ("\n Digite o tamanho do vetor:");
    scanf("%d",&tam);
    
    vet = (int *) malloc(tam* sizeof (int));           
    
    for(i=0;i<tam;i++)
    {
      printf (" elemento:");
      scanf("%d",&vet[i]); 
    }   
 
    
	
	for(i=0;i<tam;i++)
    {
      printf ("\n vet[%d]=%d",i,vet[i]);
    }
    system ("PAUSE");
 
    free (vet);//desalocação do vetor

}

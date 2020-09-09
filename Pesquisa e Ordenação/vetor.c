#include <stdio.h>
#include <stdlib.h>

main(void)
{
    float notas[5];
    int i = 0;

    for( i=0; i < 5; i++)
    {
        printf("Digite uma nota\n");
        scanf("%f", &notas[i]);
    }

	printf("Notas lancadas!!!!\n\n");
	
	    for( i=0; i < 5; i++)
    {
        printf("nota %d - %f \n", i, notas[i]);

    }

}

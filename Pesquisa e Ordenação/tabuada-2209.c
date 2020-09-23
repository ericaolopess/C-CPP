#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
   int num, i;
	 
	 printf("digite a tabuada que vc qer");
	 scanf("%d",&num);
	 
	 for(i=1 ; i<10; i++)
	 {
	 	printf("%d x %d = %d\n", num, i, (num*i));
	 }
	 
	return 0;
	
}

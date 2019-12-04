#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int n, k=rand()%1000;	
	printf("%d", k);
	printf("Guess the number:");
	do{
		scanf("%d", &n);
		if(n>k)
			printf("Guess Lower \n");
		else if(n<k)
			printf("Guess Higher \n");
		else 				
			printf("Congrats. Found it \n");

	}while(n!=k);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int n, k=rand()%1000;
	printf("Guess the number:");
	scanf("%d", &n);
	
	while(1){
		
		if(n==k){
			printf("Congrats. Found it \n");
			break;
		}else{
			if(n>k)
				printf("Guess Lower \n");
			else
				printf("Guess Higher \n");
			scanf("%d", &n);				
		}
	}	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int x, line=1;
	printf("Enter a number:");
	scanf("%d", &x);
	while(1){
		int k = rand() % 100;
		
		printf("%d. %d \n", line, k);
		if (k==x)
		{
			printf("Found it");
			break;
		}
		line++;
	}
}


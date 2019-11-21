#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int n, k, space=0;	
	printf("Enter a positive number:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		k=rand()%10;
		if(k>0)
			space=k-1;

		for (int i = 0; i <=space; i++)
		{
			printf(" ");
		}

		printf("*\n");
	}
}



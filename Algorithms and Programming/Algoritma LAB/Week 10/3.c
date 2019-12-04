#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	for (int i = 0; i < 5; ++i)
	{
		int k=rand() % 100;
		printf("The random number is %d\n", k);
	}
}


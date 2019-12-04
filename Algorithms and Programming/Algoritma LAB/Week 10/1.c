#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int k=rand();
	printf("The random number is %d\n", k);
}


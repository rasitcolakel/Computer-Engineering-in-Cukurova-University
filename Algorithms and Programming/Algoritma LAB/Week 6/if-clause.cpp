#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 3, b = 5;

	if (a>b)
	{
		printf("The largest is %d", a);
	}

	else if (b>a)
	{
		printf("The largest is %d", b);
	}
	
	else{
		printf("The numbers, which are %d and %d, equal to each other ", a, b);
	}
	
	return 0;
}

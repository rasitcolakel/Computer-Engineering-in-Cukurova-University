#include <stdio.h>


/*
1st floor roots 1000 tl
Every floor cost %20 less than previous floor

1000
1000+800

*/
float floor(float x){
	if(x==1)
		return 1000;
	else 
		return floor(1)+floor(x-1)*0.8;
}

int main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	printf("%f", floor(num));
	return 0;
}

#include <stdio.h>

int main(){
	int number, counter=2, primen=0;
	printf("Enter a number:");
	scanf("%d", &number);
	
	while(counter<number){
		if (number%counter==0){
			primen++;
			break;
		}
		counter++;
	}

	if (primen>0){
		printf("%d is not a prime number \n",  number );
	}else{
		printf("%d is a prime number \n",  number );
	}
}





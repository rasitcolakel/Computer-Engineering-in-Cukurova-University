#include <stdio.h>

/*
Write a program that calculates the sum of numbers which is between 1 and n which is entered by user
*/

int main(){
	int i, f, top=0;
	printf("Please enter a number which is bigger than 1");
	scanf("%d", &f);
	
	if(f>1){
		for(i=1; i<=f; i++)
			top+=i;	
			
		printf("The sum of numbers which is between 1 and %d : %d", f, top);
	}else{
		printf("The number you entered is not bigger than 1");
	}
			
}



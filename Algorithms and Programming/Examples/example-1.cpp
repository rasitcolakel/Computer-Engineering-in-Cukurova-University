#include <stdio.h>

/*
Write a program that detects whether a number, which is entered by user, is odd or even
*/

int main(){
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	if(number%2==0){
		printf("The number is even");
	}else{
		printf("The number is odd");
	}
	return 0;
}

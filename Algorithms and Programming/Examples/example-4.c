#include <stdio.h>

/*
Write a program that calculates the average of 100 Numbers which are entered by user 
*/

int main(){
	int i=0, number, sum=0, average=0;
	
	while(i<100){
		i++;
		printf("Please Enter the %d. number:", i);
		scanf("%d", &number);
		sum+=number;
		
	}
	average= sum/i;
	printf("The average of 100 numbers: %d", average);
}

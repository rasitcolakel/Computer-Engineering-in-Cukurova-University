#include <stdio.h>

/*
Ask a student to her/his midterm exam and final exam results'
Then, write a program that calculates the average of the exams results 
and write whether the student passes or fails (pass grade must be bigger than or equal to 60)
*/

int main(){
	int midterm, final, average;
	
	printf("Enter your midterm exam result:");
	scanf("%d", &midterm);
	printf("Enter your final exam result:");
	scanf("%d", &final);
	
	average=(midterm*4/10)+(final*6/10);
	if(midterm<=100 and final<=100){
		if(average>=60){
			printf("Passed");
		}else{
			printf("Failed");
		}		
	}else{
		printf("The results you entered must be smaller than or qeual to 100");
	}


}

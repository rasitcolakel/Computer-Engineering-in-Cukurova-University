#include <stdio.h>


int main(){
	
	int grade;
	printf("Enter the grade");
	scanf("%d", &grade);
	
	switch(grade/10){	
		case 10: case 9:
			printf("AA"); break;
		case 8:
			printf("BA"); break;
		case 7:
			printf("BB"); break;			
		case 6:
			printf("CC"); break;
		case 5:
			printf("DC"); break;			
		case 4:
			printf("DD"); break;
		default:
			printf("FF");	
	}


}

#include <stdio.h>


int main(){
	int month;
	printf("Enter month: ");
	scanf("%d", &month);

	switch(month){
		case 1:
			printf("31 days");
			break;
		case 2:
			printf("28 days");
			break;
		case 3:
			printf("31 days");
			break;		
		case 4:
			printf("30 days");
			break;
		case 5:
			printf("31 days");
			break;
		case 6:
			printf("30 days");
			break;
		case 7:
			printf("31 days");
			break;
		case 8:
			printf("31 days");
			break;
		case 9:
			printf("30 days");
			break;
		case 10:
			printf("31 days");
			break;
		case 11:
			printf("30 days");
			break;
		case 12:
			printf("31 days");
			break;
		default:
			printf("%d is not a month", month);
	
	/*The progrem can be re-writed like : */
	
	switch(month){
	
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31 days"); 
			break;
	
		case 2:
			printf("28 days");
			break;
			
		case 4: case 6: case 9: case 11:
			printf("30 days");
			break;
	
		default:
			printf("%d is not a month", month);
	}	
	
	}

}

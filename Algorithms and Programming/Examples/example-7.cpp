#include <stdio.h>

int main(void){
	int n, space, star;
	printf("Enter an odd number:");
	scanf("%d",&n);
	space=n/2;
	star=1;
	
	for(int i=0; i<n;i++){
		for(int j=0; j<space; j++)
			printf(" ");
		for(int k=0; k<star; k++)
			printf("*");
		if(star<n)	
			star+=2;
			
		space-=1;	
		printf("\n");
		
	}
}

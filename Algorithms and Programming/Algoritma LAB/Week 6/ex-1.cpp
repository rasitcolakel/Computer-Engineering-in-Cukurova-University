#include <stdio.h>
#include <stdlib.h>
//Take three side of a triangle from user check if they form a triangle

int main(){
	
	int s1, s2, s3;
	
	printf("Please enter first side of a triangle=");
	scanf("%d", &s1);
	printf("Please enter second side of a triangle=");
	scanf("%d", &s2);
	printf("Please enter third side of a triangle=");
	scanf("%d", &s3);
	/*
	printf("Please enter the sides of a triangle=");
	scanf("%d %d %d", &s1,&s2,&s3);
		
	This code blog can be used, too.
	*/

	if((s1+s2)>s3 && (s1+s3)>s2 && (s2+s3)>s1){ //checking whether they form a triangle
	
		if(s1==s2 and s2==s3){
			printf("The type of triangle is equilateral triangle");
		}else if(s1==s2 || s1==s3 || s2==s3){
			printf("The type of triangle is isosceles triangle");
		}else{
			printf("The type of triangle is scalene triangle");
		}
		
	}else{
		printf("They do not form a triangle");
	}
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int asalsayi(int num){
	int a=0, i=0;
	for(i =2; i<num; i++){
		if(num%i==0)
			a=1;
	}
	if(a==1)
		printf("Not prime");
	else
		printf("Prime");
}
int main(){
	myfunc();
	int num, a=0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	asalsayi(num);
		
	return 0;
}

#include <stdio.h>

int f(int x){
	if(x==0)
		return 2;
	else 
		return 2* f(x-1)+1;
}
int main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	printf("%d ", f(num));
}

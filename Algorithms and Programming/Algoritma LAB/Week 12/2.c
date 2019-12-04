#include <stdio.h>

int fak(int x){
	if(x==1)
		return 1;
	else 
		return x*(fak(x-1));
}
int main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	printf("%d ", fak(num));
	return 0;
}

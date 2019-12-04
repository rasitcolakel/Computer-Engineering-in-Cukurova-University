#include <stdio.h>

int fibo(int x){
	int a=1, b=1,sum=a+b;
	if(x==1 || x==2)
		return 1;
	else 
		return fibo(x-1)+fibo(x-2);
}

int main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	printf("%d ", fibo(num));
	return 0;
}

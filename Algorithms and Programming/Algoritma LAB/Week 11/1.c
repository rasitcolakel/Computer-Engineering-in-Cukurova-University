#include <stdio.h>
#include <stdlib.h>

int myfunc(int x){
	int result=2*x+5;
	return result;	
}
int main(){
	printf("%d", myfunc(5));
}

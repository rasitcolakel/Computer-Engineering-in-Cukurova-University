#include <stdio.h>
#include <stdlib.h>

int asalsayi(int s){
	for(int j=2; j<s; j++)
		if(s%j==0)
			return 0;
	return 1;
}

int main(){
	int a, b, min, max, flag;
	printf("Num 1:\n");
	scanf("%d", &a);
	printf("Num 2:\n");
	scanf("%d", &b);	
    min=a, max=b;
    if(min>max){
        min=a; max=b;
    }
	for(int i=min; i<=max; i++){
		if(asalsayi(i)){
			printf("%d Not prime\n", i);
		}else{
			printf("%d prime\n", i);
			
		}
	}	
}

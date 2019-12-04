#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int money, yuzluk, ellilik, yirmilik, onluk, beslik, birlik;

	printf("Enter the amount of money:");
	scanf("%d", &money);
	
	yuzluk = money/100;
	money=money%100;
	
	ellilik=money/50;
	money=money%50;
	
	yirmilik=money/20;	
	money=money%20;
	
	onluk=money/10;		
	money=money%10;
	
	beslik=money/5;
	money=money%5;
	
	onluk=money/1;		
	printf("%d tane 100'luk\n", yuzluk);
	printf("%d tane 50'lik\n", ellilik);
	printf("%d tane 50'lik\n", ellilik);
	printf("%d tane 50'lik\n", ellilik);
	printf("%d tane 50'lik\n", ellilik);
	printf("%d tane 50'lik\n", ellilik);
	printf("%d tane 50'lik\n", ellilik);
	return 0;
		
	}

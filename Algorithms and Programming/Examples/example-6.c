#include <stdio.h>

int main(){
	/*
	Klavyeden girilen say�ya g�re a�a��daki ��kt�n�n 2nx2n-1 dikd�rtgenini olu�turan kod
	**********
	****  ****
	***    ***
	**      **
	*        *
	**      **
	***    ***
	****  ****
	**********
	*/
	
	int n, i, j, bosluk=0,yaz;
	printf("Please enter a number:");
	scanf("%d", &n);
	yaz=n;
	for(i=1; i<=n; i++){	
		for(j=1; j<=yaz; j++)
			printf("*");
		for(j=1; j<=bosluk; j++)
			printf(" ");			
		for(j=1; j<=yaz; j++)
			printf("*");	
		bosluk+=2;
		yaz--;
		printf("\n");		
	}
	yaz=1;
	bosluk=(n*2)-2;
	for(i=1; i<n; i++){
		yaz++;
		bosluk-=2;
		for(j=1; j<=yaz; j++)
			printf("*");
		for(j=1; j<=bosluk; j++)
			printf(" ");			
		for(j=1; j<=yaz; j++)
			printf("*");	
		printf("\n");		
	}	
	
}


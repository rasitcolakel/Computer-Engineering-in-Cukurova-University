#include <stdio.h>

int main(){
	/*
	Klavyeden girilen say�ya g�re a�a��daki ��kt�n�n nxn dikd�rtgenini olu�turan kod
	* * * *
	 * * * 
	* * * *
	 * * * 
	* * * *
	 * * * 
	* * * *
	 * * * 		
	*/
	
	int n, i, j;	
	
	printf("Please enter a number:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		for(j=1; j<=n; j++){
			if(j%2==0){
				if(i%2==0)
					printf("*");
				else
					printf(" ");
			}else{
				if(i%2==1)
					printf("*");
				else
					printf(" ");				
			}			
			
		}
		printf("\n");
	}
	
}

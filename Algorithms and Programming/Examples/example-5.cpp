#include <stdio.h>

int main(){
	/*
	Klavyeden girilen sayýya göre aþaðýdaki çýktýnýn nxn dikdörtgenini oluþturan kod
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

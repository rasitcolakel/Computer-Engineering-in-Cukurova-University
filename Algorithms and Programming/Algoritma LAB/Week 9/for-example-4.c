#include <stdio.h>
int main(){
	int n, bosluk, yaz=1;
	printf("Enter an odd number=");
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		bosluk=(n-yaz)/2;		
			for(int k=0;k<bosluk; k++)
				printf(" ");
			for(int k=0;k<yaz; k++)
				printf("*");	
		if(yaz!=n)
			yaz+=2;
		bosluk--;
		printf("\n");
	}	
}



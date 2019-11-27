#include <stdio.h>
#include <stdlib.h>

int usbul(int sayi, int us){
    int result=1;
    
    for(int i=1; i<=us; i++)
        result*=sayi;
        
    return result;
}

int main(){
	int a, b, c;
	printf("Sayiyi giriniz:\n");
	scanf("%d", &a);
	printf("Almak istediginiz ilk us:\n");
	scanf("%d", &b);
	printf("Almak istediginiz ilk son us:\n");
	scanf("%d", &c);	
	for(int i=b; i<=c; i++){
	    printf("%d sayisinin %d. ussu %d'dir\n", a, i, usbul(a,i));
	}	
}

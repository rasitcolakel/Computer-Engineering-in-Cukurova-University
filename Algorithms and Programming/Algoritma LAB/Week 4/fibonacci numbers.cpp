#include <stdio.h>


int main(void) 
{
	
	int inum=0, fnum=1, fib=inum+fnum, index;
	
	printf("Fibonacci sayisinin kacinci degerini almak istediginiz degeri giriniz");
	scanf("%d", &index);
	
	
	if (index<=1)
		printf("%d", index);
	else{
		index-=3;//index deðerimizi üç azalttýk çünkü ilk üç deðer þu anda belirli "0 1 1" 		
		while(index>0){
			index--;
			inum=fnum;
			fnum=fib;
			fib=inum+fnum;	
		}
		printf("%d", fib);
	}
	return 0;
}

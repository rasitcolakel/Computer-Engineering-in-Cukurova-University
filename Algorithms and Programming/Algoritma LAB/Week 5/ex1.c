#include <stdio.h>
#include <stdlib.h>
int main (){
	
	//variables
	float n1, n2, sonuc;
	char islem;
	printf("Yapmak istediginiz islemi secin \n toplama icin + \n cikarma icin - \n bolme icin / \n carpma icin * \n tuslarindan birine tiklayiniz= ");
	scanf("%c", &islem);	
	printf("1. sayiyi gir=");
	scanf("%f", &n1);
	printf("2. sayiyi gir=");
	scanf("%f", &n2);		

	
	if(islem=='+')
		sonuc=n1+n2;
	else if(islem=='-')
		sonuc=n1-n2;
	else if(islem=='/')
		sonuc=n1/n2;
	else if(islem=='*')
		sonuc=n1*n2;
	else
		printf("\n girilen deger sistemde bulunamadi haaaiiiiiin");
		
	printf("isleminizin sonucu = %f", sonuc);
	
	return 0;
		
	}

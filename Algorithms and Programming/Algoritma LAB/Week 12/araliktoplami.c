#include <stdio.h>
int toplam(int a){
    if(a==1)
        return 1;
    else
        return a + toplam(a-1);
}
int main(){
    int num;
    printf("Bir sayi giriniz: ");
    scanf("%d", &num);
    printf("0 ile %d arasindaki sayilarin toplami: %d", num, toplam(num));
}

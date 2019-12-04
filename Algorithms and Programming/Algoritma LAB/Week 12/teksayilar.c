#include <stdio.h>
int toplam(int a){
    if(a%2==0)
        a--;
    if(a==1)
        return 1;
    else
        return a + toplam(a-2);
}
int main(){
    int tsayi;
    printf("Bir tek sayi giriniz: ");
    scanf("%d", &tsayi);
    printf("0 ile %d arasindaki tek sayilarin toplami: %d", tsayi, toplam(tsayi));
}

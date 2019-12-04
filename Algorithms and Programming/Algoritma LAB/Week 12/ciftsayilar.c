#include <stdio.h>
int toplam(int a){
    if(a%2!=0)
        a--;
    if(a==0)
        return 0;
    else
        return a + toplam(a-2);
}
int main(){
    int csayi;
    printf("Bir cift sayi giriniz: ");
    scanf("%d", &csayi);
    printf("0 ile %d arasindaki cift sayilarin toplami: %d", csayi, toplam(csayi));
}

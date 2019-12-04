#include <stdio.h>

/*
1 g�n gecikirse 2,
2 g�n gecikirse 4,
3 g�n gecikirse 7
4 g�n gecikirse 11
...
...
...
8 g�n gecikirse 37 g�n ceza alacak
*/


int gecikmecezasi(int gun){
    if (gun==0)
        return 0;
    else if(gun==1)
        return 2;
    else
        return gun + gecikmecezasi(gun-1);
}

int main(){
    int gun;
    printf("Kitap zamanindan kac gun sonra teslim edildi?");
    scanf("%d", &gun);

    printf("%d gun gecikmeden dolayi %d gun ceza verilir.", gun, gecikmecezasi(gun));

    return 0;
}

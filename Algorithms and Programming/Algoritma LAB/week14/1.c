#include <stdio.h>

/*Yerel(local) Deðiþken kullanýmý*/
void fun(int a){
    a+=2;
    printf("%d\n", a);
}
int main(){
    int a = 2;
    printf("%d\n", a);

    fun(a);

    printf("%d\n", a);
}



 /*

    Çarpým tablosu
    int myarray[10][10];
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++)
            myarray[i-1][j-1]=i*j;
    }

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++)
            printf("%d ", myarray[i-1][j-1]);
        printf("\n");
    }*/

#include <stdio.h>

/*Genel(global) Deðiþken kullanýmý*/
int counter=0;
void fun(){
    counter++;
}
int main(){
    printf("%d\n", counter);
    fun(counter);
    printf("%d\n", counter);
}

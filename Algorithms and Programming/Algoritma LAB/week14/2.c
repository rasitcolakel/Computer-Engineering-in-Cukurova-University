#include <stdio.h>

/*Genel(global) De�i�ken kullan�m�*/
int counter=0;
void fun(){
    counter++;
}
int main(){
    printf("%d\n", counter);
    fun(counter);
    printf("%d\n", counter);
}

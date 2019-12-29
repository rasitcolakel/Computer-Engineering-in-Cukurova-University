#include <stdio.h>

int main(){

    int a[]={ 5, 3, 19,6,12,1,7,9,10,77};
    for(int i=0; i<10; i++){
     printf("%d\t ", a[i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        for(int j = 0; j<10; j++){
            int temp=a[i];
            if(a[i]<a[j]){
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(int i=0; i<10; i++){
     printf("%d\t ", a[i]);
    }

}

/*
for(int j=0; j<10; j++){

    for(int i = 0 ; i<10; i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
}
*/

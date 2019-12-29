#include <stdio.h>
int sort(int arr[] /* veya int *arr */){
    for(int i=0; i<10; i++){
        for(int j = 0; j<10; j++){
            int temp=arr[i];
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int sortprint(int parr[] /* veya int *parr */){
    for(int i=0; i<10; i++){
     printf("%d\t ", parr[i]);
    }
}
int main(){

    int a[]={ 44, 67, 48, 100, 66, 21, 43, 7, 18, 20};
    int b[]={ 49, 2, 39, 10, 74, 55, 86, 11, 14, 67};
    int c[]={16, 33, 35, 11, 100, 78, 42, 26, 97, 94};
    sort(a);
    sort(b);
    sort(c);
    sortprin-t(a);
    printf("\n");
    sortprint(b);
    printf("\n");
    sortprint(c);
}

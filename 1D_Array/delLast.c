#include<stdio.h>
int main(){
    int arr[] = {23,45,12,76,14,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[size-1];
    for(int i=0; i<size-1; i++){
        brr[i] = arr[i];
    }
    printf("After Deletion : ");
    for(int i=0; i<size-1; i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
}
#include<stdio.h>
int main(){
    int arr[] = {2,4,6,1,0,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    printf("After Deletion : ");
    for(int i=0; i<size-1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
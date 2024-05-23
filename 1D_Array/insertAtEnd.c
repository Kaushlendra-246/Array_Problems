//When Array is Full
#include<stdio.h>
int insertAtEnd(int arr[], int brr[], int s, int n){
    for(int i=0; i<s; i++){
        brr[i] = arr[i];
    }
    brr[s] = n;
    return s+1;
}
int main(){
    int arr[] = {2,5,8,2,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int brr[size+1];
    size = insertAtEnd(arr,brr,size,9);
    printf("New Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
    return 0;
}
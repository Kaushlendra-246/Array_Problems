//When array is full
#include<stdio.h>
int insertAtBeg(int arr[], int brr[], int s,int n){
    for(int i=1; i<=s; i++){
        brr[i] = arr[i-1];
    }
    brr[0] = n;
    return s+1;
}
int main(){
    int arr[] = {23,56,14,78,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[size+1];
    size = insertAtBeg(arr,brr,size,20);
    printf("New Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
    return 0;
}
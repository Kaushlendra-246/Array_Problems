#include<stdio.h>
int insert(int arr[],int brr[],int s,int pos,int n){
    pos--;
    for(int i=0; i<pos; i++){
        brr[i] = arr[i];
    }
    brr[pos] = n;
    for(int i=pos+1; i<s+1; i++){
        brr[i] = arr[i-1];
    }
    return s+1;
}
int main(){
    int arr[] = {21,22,56,45,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[size+1];
    size = insert(arr,brr,size,3,25);
    printf("After inserting : ");
    for(int i=0; i<size; i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main(){
    int arr[8] = {21,43,56,41,76,12,98,54};
    printf("Array : ");
    for(int i=0; i<8; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int pos = 3;
    for(int i=pos-1; i<8-1; i++){
        arr[i] = arr[i+1];
    }
    
    printf("After Deletion : ");
    for(int i=0; i<8-1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
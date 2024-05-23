#include<stdio.h>
int main(){
    int arr[] = {2,5,3,1,9,0,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Method 1
    // int brr[size];
    // int n = 0;
    // for(int i=size-1; i>=0; i--){
    //     brr[n++] = arr[i];
    // }

    //Method 2
    int i=0,j=size-1;
    while(i<j){
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        i++;
        j--;
    }
    printf("Reversed Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
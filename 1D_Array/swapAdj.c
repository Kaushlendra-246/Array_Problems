#include<stdio.h>
int main(){
    int arr[] = {2,6,4,9,0,2,5,8,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = 1;
    int temp;
    while(i <= size && j <= size){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i = j+1;
        j = i+1;
    }

    for(int k=0; k<size; k++){
        printf("%d ",arr[k]);
    }
}
#include<stdio.h>
int main(){
    int arr[5] = {2,34,56,1,4};
    int idx = -1;
    printf("Array : ");
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    // for(int i=5; i>0; i--){
    //     int sum = 0;
    //     idx = i-1;
    //     for(int j=0; j<i; j++){
    //         sum = sum + arr[j];
    //     }
    //     arr[idx] = sum;
    // }

    for(int i=1; i<5; i++){
        arr[i] += arr[i-1];
    }

    printf("Prefix Sum Array : ");
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

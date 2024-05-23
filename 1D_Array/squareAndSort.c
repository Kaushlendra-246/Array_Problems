#include<stdio.h>
#include<math.h>
int main(){
    int arr[] = {-12,-6,2,7,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){
        arr[i] = pow(arr[i],2);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
               int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("New Array : ");
    //In Accending Order
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
#include<stdio.h>
#include<limits.h>
int main() {
    int arr[7] = {2,5,3,8,1,7,4};
    printf("Array : ");
    for(int i=0; i<7; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int min = INT_MAX;
    for(int i=0; i<7; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("First min %d\n",min);
    int min2 = INT_MAX;
    for(int i=0; i<7; i++){
        if((min2>arr[i]) && (arr[i] != min)){
            min2 = arr[i];
        }
    }
    printf("Second Min %d\n",min2);
    int min3 = INT_MAX;
    for(int i=0; i<7; i++){
        if((min3>arr[i]) && (arr[i] != min) && (arr[i] != min2)){
            min3 = arr[i];
        }
    }
    printf("Third Min %d\n",min3);
}
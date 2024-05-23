#include<stdio.h>

int* modify(int *a/* int a[] */){
    a[2] = 0;
    return a;
}

int main(){
    int a[] = {2,4,7,1,9,3,6};
    printf("Array : ");
    for(int i=0; i<7; i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    //int *a = {2,4,5,7,8,3,1}; //Show error
    int* b = modify(a);
    printf("New Array : ");
    for(int i=0; i<7; i++){
        printf("%d ",*(b+i));
        //printf("%d ",b[i]);
    }
}
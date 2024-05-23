#include<stdio.h>

int *fun(int *b/* b[] */,int n){
    return &b[n/2]; //Never return local var to function,but we can return static var value because
         // they have their value after function finishes and its var retain own value till whole program execution
}

int main(){
    int a[5] = {2,4,7,1,9};
    int *ptr = fun(a,5);
    printf("%d\n",*ptr);
    return 0;
}
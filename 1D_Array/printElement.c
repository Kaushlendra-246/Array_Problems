#include<stdio.h>
int main(){
    int a[] = {32,54,8,5,1,0}; //Name of the Array is represent pointer to the first element
    int n = sizeof(a)/sizeof(a[0]);//Bet we can't reinitilise this pointer like-a++,a=a+1;
    printf("Array : ");           //We can use *(a+i) or a[i],for accessing other element
    for(int *ptr = a; ptr <= &a[n]; ptr++){
        printf("%d ",*ptr);
    }
    return 0;
}
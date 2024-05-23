#include<stdio.h>
int main(){
    //1D Array
    int a[] = {2,5,1,7,3};
    printf("%d ",*a);
    printf("%d ",*a+3);
    printf("\n");


    //2D Array
    int arr[][3] = {1,2,3,4,3,1,5,6,9,0,4,7};
    //This 2D Array is combination of 3, 1D Array (with 3 element)
    //here arr (a pointer), is pointing to the first element of first 1D Array,but we can't access this element using arr
    //Reason -> arr, contaning address of first element of first 1D Array,but it point to whole first 1D Array
    //And arr+1 (wrong -> arr++), give address of first element in second 1D Array
    //How to Access?
    printf("%d ",*(*arr)); // *arr (addres of 1st element of 1st 1D Array)
    printf("%d ",*(*arr+1));// *arr+1 (addres of 2nd element of 1st 1D Array)
    printf("%d ",*(*arr+2));
    printf("%d ",*(*(arr+1)));// *(arr+1) (addres of 1st element of 2nd 1D Array)
    printf("%d ",*(*(arr+1)+1));
    //How to access 2nd last element
    printf("%d ",*(*(arr+3)+1));
    printf("\n");


    //3D Array
    int b[][2][2] = {2,5,1,7,3,9,2,6};
    //This 3D Array is the combination of 2,2D Array(with 2, 1D Array(with 2 element))
    //b is pointing to the 1st 2D Array's 1st 1D Array's 1st element
    printf("%d ",*(*(*b)));
    printf("%d ",*(*(*b+1)));
    printf("%d ",*(*(*(b+1))));
    printf("%d ",*(*(*(b+1)+1)));
}
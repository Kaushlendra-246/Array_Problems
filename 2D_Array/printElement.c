//In C language Ganerrly row major order is apply
#include<stdio.h>
int main(){
    int arr[][3] = {2,4,7,6,1,9,11,23,18};
    int (*ptr)[3] = arr; //ptr is a pointer, pointing to the 1st 1D array of this 2D Array
    // (*ptr)[1] gives the 2nd element of the 1st 1D Array
    // (*ptr)+1 points to the 2nd element of the 1st 1D Array
    // *((*ptr)+1) gives the 2nd Element of the 1st 1D Array
    // *((*ptr)+1) == (*ptr)[1]
    printf("%d ",(*ptr)[1]);
    ptr++;
    printf("%d ",(*ptr)[2]);
    printf("\n");

    //Using pointer we can print by only one loop
    //In C language Ganerrly row major order is apply
    for(int *p = &arr[0][0]; p<=&arr[3-1][3-1]; p++){
        printf("%d ",*p);
    }
}
#include<stdio.h>
int main(){
    int mat1[3][4] = {2,8,2,0,1,4,6,0,3,6,7,5};
    int mat2[4][2] = {2,6,3,9,2,6,0,3};

    int res[3][2] = {0};
    //Multiplication
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<4; k++){
                res[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("Resultent Matrix : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
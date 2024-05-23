#include<stdio.h>
int main(){
    int mat[3][4] = {12,4,2,54,34,22,75,4,32,81,31,23};

    printf("Matrix : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    //Method 1
    //Wave 
    for(int i=0; i<4; i++){
        if(i%2 == 0){
        int j = 0;
        int k = 3-1;
        while(j<=k){
            int temp = mat[j][i];
            mat[j][i] = mat[k][i];
            mat[k][i] = temp;
            j++;
            k--;
        }
        }
    }

    printf("Wave Matrix : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
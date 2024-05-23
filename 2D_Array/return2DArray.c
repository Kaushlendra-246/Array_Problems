#include<stdio.h>

void display(int mat[][4]){
    printf("Matrix : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
}

int main(){
    int mat[3][4] = {12,4,2,54,34,22,75,4,32,81,31,23};

    display(mat);
    printf("\n%d",mat[2][3]);
}
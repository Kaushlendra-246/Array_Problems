#include<stdio.h>
int main(){
    int mat[3][4] = {2,5,3,6,4,7,2,6,4,2,7,3};
    printf("Matrix :\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    //Spiral print
    int minrow = 0;
    int mincol = 0;
    int maxrow = 3-1;
    int maxcol = 4-1;
    int tnE = 3*4;
    int count = 0;
    printf("Spiral Order : \n");
    while(count < tnE){
        for(int j=mincol; j<=maxcol; j++){
            printf("%d ",mat[minrow][j]);
            count++;
        }
        if(count>=tnE) break;
        minrow++;
        for(int i=minrow; i<=maxrow; i++){
            printf("%d ",mat[i][maxcol]);
            count++;
        }
        if(count>=tnE) break;
        maxcol--;
        for(int k=maxcol; k>=mincol; k--){
            printf("%d ",mat[maxrow][k]);
            count++;
        }
        if(count>=tnE) break;
        maxrow--;
        for(int l=maxrow; l>=minrow; l--){
            printf("%d ",mat[l][mincol]);
            count++;
        }
        if(count>=tnE) break;
        mincol++;
    }
    return 0;
}
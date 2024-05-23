#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of Row : ");
    scanf("%d",&r);
    printf("Enter number of Column : ");
    scanf("%d",&c);

    int matrix[r][c];
    printf("Enter Element : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Transpose : \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}
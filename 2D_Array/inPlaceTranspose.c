//Matrix Should be Square

#include<stdio.h>
int main(){
    int n;
    printf("Enter Order of Matrix : ");
    scanf("%d",&n);

    int matrix[n][n];
    printf("Enter Element : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //Transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("Transpose : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
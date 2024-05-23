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

    //Method 1
    //Transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i=0; i<n; i++){
        int j = 0;
        int k = n-1;
            while(j<=k){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                j++;
                k--;
            }
    }

    printf("Rotated Matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // //Method 2
    //printf("Rotated Matrix : \n");
    // for(int i=0; i<n; i++){
    //     for(int j=n-1; j>=0; j--){
    //         printf("%d ",matrix[j][i]);
    //     }
    //     printf("\n");
    // }
}
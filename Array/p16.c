#include <stdio.h>

int main(){
    int row,col,i,j;
    scanf("%d %d ", &row, &col);

    int arr1[row][col];
    int arr2[row][col];
    int sum[row][col];
    int diff[row][col];


    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("array1:\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("array2:\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Sum:\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    printf("diff:\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            diff[i][j]=arr1[i][j]-arr2[i][j];
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}



/*

2 3
5 4 3
3 4 5
2 2 2
3 3 3


*/
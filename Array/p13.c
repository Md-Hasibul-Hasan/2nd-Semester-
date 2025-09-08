#include <stdio.h>

int main(){
    int row,col,i,j;
    scanf("%d %d ", &row, &col);

    int arr[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Result:\n");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}



/*

2 3
5 4 3
3 4 5


*/
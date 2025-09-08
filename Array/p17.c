#include <stdio.h>

int main(){
    int a,b,c,i,j;

    scanf("%d %d ", &a, &b);
    int arr1[a][b];

    scanf("%d %d ", &b, &c);
    int arr2[b][c];

    int multi[a][c];



    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(i=0; i<b; i++){
        for(j=0; j<c; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("array1:\n");

    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("array2:\n");

    for(i=0; i<b; i++){
        for(j=0; j<c; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication:\n");

    for(i=0; i<a; i++){
        for(j=0; j<c; j++){

            multi[i][j]=0;

            for(int k = 0; k < b; k++){
                multi[i][j] += arr1[i][k] * arr2[k][j];
        }
                 


            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

 
    return 0;
}


/*

2 3
3 2
1 2 3
0 2 1
1 2
2 3
3 4

*/
#include <stdio.h>

void declaration(){

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void userinput(){
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void matsum(){
    int r,c;
    scanf("%d %d", &r, &c);



    int arr1[r][c];
    int arr2[r][c];
    int sum[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nsum:\n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void max_value_idx(){
    int r,c;
    scanf("%d %d", &r, &c);



    int arr1[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    int max_val=arr1[0][0];
    int max_idx_row=0;
    int max_idx_col=0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr1[i][j]>max_val){
                max_val=arr1[i][j];
                max_idx_row=i;
                max_idx_col=j;
            }
        }
    }

    printf("max value: %d index: %d , %d", max_val, max_idx_row, max_idx_col);

}


void max_sum_row(){
    int r,c;
    scanf("%d %d", &r, &c);



    int arr1[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    int row=0;
    int max_sum=0;
    int sum;

    for(int i=0; i<r; i++){
        sum=0;
        for(int j=0; j<c; j++){
            sum = sum + arr1[i][j];
        }
        if(sum>max_sum){
            max_sum=sum;
            row=i;
        }
    }

    printf(" %d %d", max_sum, row);
}

void transpose_new(){
    int r,c;
    scanf("%d %d", &r, &c);



    int arr1[r][c];
    int transpose[c][r];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            // printf("%d ", arr1[j][i]);
            transpose[i][j]=arr1[j][i];
        }
        // printf("\n");
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}


void transpose_main(){
    int n;
    scanf("%d", &n);



    int arr1[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr1[i][j];
            arr1[i][j]=arr1[j][i];
            arr1[j][i]=temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

void clckwise(){
    int n;
    scanf("%d", &n);



    int arr1[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr1[i][j];
            arr1[i][j]=arr1[j][i];
            arr1[j][i]=temp;
        }
    }


    for(int i=0; i<n; i++){
        int j=0, k=n-1;
        while(j<k){
            int temp = arr1[i][j];
            arr1[i][j]=arr1[i][k];
            arr1[i][k]=temp;
            j++, k--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

void multiplication(){
    int r1,cr,c2;
    scanf("%d %d %d", &r1, &cr, &c2);

    int arr1[r1][cr];
    int arr2[cr][c2];
    int mul[r1][c2];

    for(int i=0; i<r1; i++){
        for(int j=0; j<cr; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<cr; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            mul[i][j]=0;
            for(int k=0; k<cr; k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}

void sumofboundary(){
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum = sum + arr[i][j];
        }
    }
    for(int i=1; i<r-1; i++){
        for(int j=1; j<c-1; j++){
            sum = sum - arr[i][j];
        }
    }

    printf("%d ", sum);
}



void up_down_left_right() {
    int n;
    scanf("%d", &n);

    int arr[n][n];

    // matrix input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int row, col;
    scanf("%d %d", &row, &col);

    // convert 1-based input to 0-based
    int a = row - 1;
    int b = col - 1;

    int sum = 0;

    // up
    if(a-1 >= 0){
        printf("Up neighbor: %d\n", arr[a-1][b]);
        sum += arr[a-1][b];
    }

    // down
    if(a+1 < n){
        printf("Down neighbor: %d\n", arr[a+1][b]);
        sum += arr[a+1][b];
    }

    // left
    if(b-1 >= 0){
        printf("Left neighbor: %d\n", arr[a][b-1]);
        sum += arr[a][b-1];
    }

    // right
    if(b+1 < n){
        printf("Right neighbor: %d\n", arr[a][b+1]);
        sum += arr[a][b+1];
    }

    printf("Sum of neighbors: %d\n", sum);
}




int main(){

    up_down_left_right();
    // sumofboundary();
    // declaration();
    // userinput();
    // matsum();
    // max_value_idx();
    // max_sum_row();
    // transpose_new();
    // transpose_main();
    // clckwise();
    // multiplication();

    return 0;
}   




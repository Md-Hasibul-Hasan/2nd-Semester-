#include <stdio.h>



void right_shift(){
    int arr[3]= {10,20,30};
    int n=3;
    int temp = arr[n-1];

    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }

    arr[0]=temp;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void reverse(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int i=0;
    int j=n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++ ){
        printf("%d ", arr[i]);
    }
}

void binary(){
    int number= 6;
    int bin[64]={0};
    int idx=0;

    while(number!=0){
        int rem = number%2;
        bin[idx] = rem;
        idx++;
        number/=2;
    }

    for(int i=idx-1; i>=0; i-- ){
        printf("%d ", bin[i]);
    }
}

void frequency(){
    int num= 55677888;
    int arr[10]={0};

    while(num!=0){
        int rem = num%10;
        arr[rem]++;
        num/=10;
    }

    for(int i=0; i<10;i++){
        printf("%d ache %d \n", i, arr[i]);
    }
}

void fibonacci(){
    int n=5;
    int arr[n];
    arr[0]=0;
    arr[1]=1;

    for(int i=2; i<n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}

void search(){
    int n=10;
    int arr[10]={1,2,3,4,6,5,7,8,9,10};
    int find=6;
    int idx=-1;

    for(int i=0; i<n; i++){
        if(arr[i]==find){
            idx=i;
            break;
        }
    }

    printf("%d",idx);
}

void binary_search(){
    int n=10;
    int arr[10]= {4,3,2,1,0,5,8,7,6,9};
    int find=80;
    int found_idx=-1;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int left=0;
    int right=n-1;
    int mid;

    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]>find){
            right=mid-1;
        }else if(arr[mid]<find){
            left = mid+1;
        }else{
            found_idx=mid;
            break;
        }
    }

    if(found_idx!=-1) printf("\n%d ", found_idx);
    else printf("\nnot found");
}

void p1(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++){
        printf("arr[%d]: %d \n",i, arr[i]);
    }
}

void p2(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int max=-9999;
    int min=9999;
    int sum=0;
    float avg;

    for(int i=0; i<10; i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
        sum+=arr[i];
    }

    avg = (float)sum/10.0;

    printf("max: %d \nmin: %d \nsum: %d \navg: %.2f", max, min, sum, avg);
}

void p3(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;

    int max=-9999;
    int second_max=-9999;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }else if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }

    // for(int i=0; i<n; i++){
    //     if(arr[i]>second_max && arr[i]!=max){
    //         second_max=arr[i];
    //     }
    // }

    printf("max: %d \nsecond_max: %d", max, second_max);
}

void p4(){
    int n=10;
    int arr[10]={11,2,3,4,5,6,7,8,9,10};
    int sorted=1;

    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            sorted=1;
        }else{
            sorted=0;
            break;
        }
    }

    if(sorted==1) printf("sorted");
    else{
        printf("not sorted\n");
        printf("Before sorting\n");

        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }

        printf("\nAfter sorting\n");

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
    }
}

void p5(){
    int n=10;
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={10,9,8,7,6,5,4,3,2,1};

    for(int i=0; i<n; i++){
        int temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
}

void p6(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int i=0;
    int j=n-1;

    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void p7(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int even=0, odd=0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0) even+=1;
        else odd+=1;
    }

    printf("even: %d \nodd: %d", even, odd);
}

void p8(){
    int n=10;
    int arr[10]={1,2,2,4,5,6,4,8,9,4};

    int max=-9999;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }

    int freq[max+1];
    for(int i=0; i<max+1; i++){
        freq[i]=0;
    }

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<max+1; i++){
        if(freq[i]>1){
            printf("%d ", i);
        }
    }
    
}


void p9(){
    int n=10;
    int arr[10]={1,2,2,4,5,6,4,8,9,4};

    int max=-9999;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }

    int freq[max+1];
    for(int i=0; i<max+1; i++){
        freq[i]=0;
    }

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<max+1; i++){
        if(freq[i]>0){
            printf("\n%d:%d ",i, freq[i]);
        }
    }
    
}


void p10(){
    int n=5;
    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos=2;
    int val=11;

    for(int i=n-1; i>=pos; i--){
        arr[i+1]=arr[i];
    }

    arr[pos]=val;

    for(int i=0; i<n+1; i++){
        printf("%d ", arr[i]);
    }

}

void p11(){
    int n=5;
    int arr[100]={1,2,3,4,5};
    // for(int i=0; i<n; i++){
    //     // scanf("%d", &arr[i]);
    //     arr[i]=i+1;
    // }

    int pos=2;

    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }

    for(int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    }
}


void p12(){
    int n=10;
    int arr[10]={1,2,2,4,5,5,4,2,2,1};

    int palindrome=1;

    int i=0, j=n-1;

    while(i<=j){
        if(arr[i]!=arr[j]){
            palindrome=0;
            break;
        }
        i++;
        j--;
    }

    if(palindrome==1) printf("palindrome");
    else printf("not palindrome");
}


void p15(){
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int tran[c][r];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            tran[i][j]=arr[j][i];
        }
        
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
}

void p_15(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}

// Write a C program to calculate the summation and difference of the two given matrices.

void p16(){
    int r,c;
    scanf("%d %d", &r, &c);

    int arr1[r][c];
    int arr2[r][c];
    int sum[r][c];
    int diff[r][c];

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

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            diff[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");

    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
}

void p17(){
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

int main(){
    p11();
    // p10();
    // p16();
    // p_15();
    // p15();
    // p12();
    // p9();
    // p8();
    // p7();
    // right_shift();
    // reverse();
    // binary();
    // frequency();
    // fibonacci();
    // search();
    // binary_search();
    // p1();
    // p2();
    // p3();
    // p4();
    // p5();
    // p6();




    return 0;
}
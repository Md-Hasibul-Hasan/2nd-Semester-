#include <stdio.h>

int main (){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    printf("find:");
    scanf("%d", &n);

    int left=0, right=n-1, mid;

    while (left<=right){
        mid = (left+right)/2;
        if(x==a[mid]){
            break;
        }
        else if(x>a[mid]){
            left=mid+1;
        }else{
            right = mid-1;
        }
    }
    printf("%d\n", mid);
    printf("%d\n", left);
    printf("%d\n", right);
    if (left>right) {
        printf("-1");
    }
    else{
        printf("\n%d", mid);
    }
    return 0;
}
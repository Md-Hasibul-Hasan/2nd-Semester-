
#include <stdio.h>

int main(){
    int n,i, sum=0;
    float avg = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int smallest = a[0];
    int largest = a[0];



    for(i=0; i<n; i++){
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }

        sum = sum + a[i];
        avg = sum/(float)n;
    }

    printf("\nLargest:%d",largest);
    printf("\nSmallest:%d", smallest);
    printf("\nSum:%d",sum);
    printf("\nAvg:%f",avg);
    return 0;
}

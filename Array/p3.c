
#include <stdio.h>

int main(){
    int n,i, sum=0;
    float avg = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max1,max2;
    max1=a[0];
    for(i=0; i<n; i++){
        if(a[i]>max1){
            max1=a[i];
        }
    }

    max2=a[0];
    for(i=0; i<n; i++){
        if(a[i]==max1){
            continue;
        }
        else if(a[i]>max2){}
            max2=a[i];
    }


    printf("max1=%d",max1);
    printf("\nmax2=%d",max2);


    return 0;
}


#include <stdio.h>

int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){

       if(a[i]>a[i+1] ){

            flag=1;

       }

    }

    if(flag==1){
        printf("sorted");
    }else{
        printf("not sorted");
    }


    return 0;
}

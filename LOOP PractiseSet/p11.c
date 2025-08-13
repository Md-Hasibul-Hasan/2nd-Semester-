#include <stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
            if(i==1){
                printf("%d",i);
            }else{
                printf("+%d",i);
            }
        }else{
            sum-=i;

            printf("-%d",i);
        }

    }

    printf("=%d",sum);


    return 0;

}

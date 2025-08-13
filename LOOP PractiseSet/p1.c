
#include <stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    /*
    while(n!=0){
        sum =sum+ n%10;
        n=n/10;
    }
    */
    for(i=n;i!=0;i/=10){
        sum = sum + i%10;
    }

    printf("Total:%d",sum);
    return 0;

}

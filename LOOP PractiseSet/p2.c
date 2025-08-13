
#include <stdio.h>

int main(){
    int n,i,counter=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        counter++;
    }
    printf("%d",counter);

    return 0;

}

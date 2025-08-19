#include <stdio.h>

int main(){
    char s[501];
    gets(s);

    int count=0, i;

    // for(i=0; s[i]!=0; i++){
    //     if(s[i]>=97 && s[i]<=122){
    //         count++;
    //     }
    // }
    for(i=0; s[i]!=0; i++){
        if(s[i]>='a' && s[i]<='z'){
            count++;
        }
    }


    printf("%d",count);
    return 0;
}
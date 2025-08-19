#include <stdio.h>

int main(){
    char s[501];
    gets(s);

    int count=1, i;

    // for(i=0; s[i]!=0; i++){
    //     if(s[i]>='a' && s[i]<='z'){
    //         s[i]-=32;
    //     }
    // }
    for(i=0; s[i]!=0; i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=' ';
        }
    }


    puts(s);
    return 0;
}
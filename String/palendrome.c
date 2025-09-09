#include <stdio.h>

int main(){
    char s1[101];
    char s2[101];
    gets(s1);

    int len1=0;

    for(int i=0; s1[i]!=0; i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+=' ';
        }
    }


    puts(s1);

    return 0;
}
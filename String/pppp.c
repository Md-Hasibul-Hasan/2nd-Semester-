#include <stdio.h>

int main(){
    char s1[101], s2[101];
    gets(s1);
    gets(s2);

    int len1=0, len2=0, flag=0;
    int min_len=len1;

    for(len1=0; s1[len1]!=0; len1++){}
    for(len2=0; s2[len2]!=0; len2++){}
    // printf("\nstr1 len %d",len1);
    // printf("\nstr2 len %d",len2);

    if(len2<len1){
        min_len=len2;
    }

    for(int i=1; i<=min_len; i++){
            
    }

    return 0;
}
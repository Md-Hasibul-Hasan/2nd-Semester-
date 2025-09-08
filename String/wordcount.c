#include <stdio.h>

// int main(){
//     char s[500];
//     gets(s);

//     int count=0, i;

//     for(i=0; s[i]!='\0'; i++){

//         count++;
//     }


//     printf("%d",count);
//     return 0;
// }

int main(){
    char str[500];
    gets(str);

    int count=0, i;

    for(i=0; str[i]!=0; i++){
        count++;
    }

    printf("%d", count);
}
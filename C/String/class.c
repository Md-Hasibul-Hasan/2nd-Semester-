#include <stdio.h>
#include<string.h>


void sting_print(){
    char str[400];

    // take input
    // scanf("%s",str);
    gets(str);

    // print output ways
    printf("%s\n",str);
    puts(str);
    printf("\n this is:%d",str[5]);
}

void frequency(){
    char str[300];
    gets(str);

    int freq[256]={0};

    for(int i=0; str[i]!=0; i++){
        int ascii = (int)str[i];
        freq[ascii]++;
    }

    for(int i=0; i<256; i++){
        if(freq[i]!=0){
            char ch= (char)i;
            printf("%c : %d\n", ch, freq[i]);
        }
    }
}


void lencount(){
    char str[501];
    gets(str);

    int len=0;
    for(int i=0; str[i]!=0; i++){
        if(str[i]==' ') continue;
        else len++;
        // printf("%c \n",str[i]);
    }

    printf("%d",len);
}


void char_value(){
    for(int i=0; i<256; i++){
        printf("%d:%c\n",i,(char)i);
    }
}


void count_lower_char(){
    char str[501];
    gets(str);

    int count=0;

    for(int i=0; str[i]!=0; i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
    }

    printf("%d",count);
}

void upper_2_lower(){
    char str[501];
    gets(str);

    for(int i=0; str[i]!=0; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=' ';
        }
    }

    puts(str);
}

void palendrome(){
    char str[501];
    gets(str);

    int len=0;
    for(len=0; str[len]!=0; len++){}

    int i=0;
    int j=len-1;
    int pal=1;

    while(i<=j){
        char c1 = str[i];
        char c2 = str[j];

        if(c1>='A' && c1<='Z') c1+=32;
        if(c2>='A' && c2<='Z') c2+=32;

        if(c1!=c2){
            pal=0; 
            break;
        }
        i++;
        j--;
    }

    if(pal==1) printf("Palendrome");
    else printf("Not palendrome");
    
}


void laxicograpy(){
    char str1[501];
    char str2[501];
    gets(str1);
    gets(str2);

    int len1=0;
    int len2=0;
    int flag=0; // 0 equal,1 str1 big, 2 str2 big

    for(len1=0; str1[len1]!=0; len1++){}
    for(len2=0; str2[len2]!=0; len2++){}

    int min_len = (len1 < len2) ? len1: len2;

    for(int i=0; i<min_len; i++){
       if(str1[i]>str2[i]) {
        flag=1;
        break;
       } else if(str2[i]>str1[i]){
        flag=2;
        break;
       } else{
        flag=0;
       }
    }

    if(flag==0){
        if(len1>len2) flag=1;
        else if(len2>len1) flag=2;
        else flag=0;
    }

    if(flag==0){
        printf("both are equal");
    }else if(flag==1){
        printf("%s is big", str1);
    }else{
        printf("%s is big", str2);
    }

}

void reverse(){
    char str[501];
    gets(str);

    int len= strlen(str);

    for(int i=0, j=len-1; i<=j; i++,j--){
        int temp = str[i];
        str[i] = str[j];
        str[j]=temp;
    }

    puts(str);

}

void sumofstring(){
    char str1[501];
    char str2[501];
    char result[502];

    gets(str1);
    gets(str2);

    int i=strlen(str1)-1; // str1 er last index
    int j=strlen(str2)-1; // str2 er last index
    int k=0; // sum er first index
    int carry=0;

    while(i>=0 || j>=0 || carry!=0){
        int a=0, b=0;

        if(i>=0) {
            a=str1[i]-48;
            i--;
        }
        if(j>=0) {
            b=str2[j]-48;
            j--;
        }

        int sum = a+b+carry;

        carry = sum/10;
        sum = sum%10 + 48;
        result[k]=sum;
        k++;
    }

    for(int l=0, m=k-1; l<=m; l++,m--){ 
        int temp = result[l];
        result[l]=result[m];
        result[m]=temp;
    }

    // result[k]='\0';
    printf("result:");
    // puts(result);
    for(int x=0; result[x]!=0; x++){
        if(result[x]!='0') printf("%c", result[x]);
    }
}

int main(){


    sumofstring();
    // reverse();
    // laxicograpy();
    // palendrome();
    // upper_2_lower();
    // count_lower_char();
    // char_value();
    // lencount();
    // frequency();
    // sting_print();
    return 0;
}
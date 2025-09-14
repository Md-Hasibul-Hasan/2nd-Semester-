#include <stdio.h>


void printArray(){

    int a[5] = {1,2,3,4,5};

    // printf("%d",a[0]);
    // a[0] = 10; //update the value
    // printf("\n%d",a[0]);

    // for(int i=0;i<5;i++){
    //     printf("%d\n",a[i]);
    // }


    char b[5] = {'a','b','c','d','e'};

    // printf("%c",b[0]);

    for(int i=0;i<5;i++){
        printf("%c\n",b[i]);
    }

}



void userInputArray(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}



void reverseprint(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
}


void roll_marks(){
    int marks[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };

    for(int i=0; i<10; i++){
        if(marks[i]>33){
            printf("roll no: %d marks: %d\n", i+1, marks[i]);
        }
    }
}


void address(){
    int arr[5] = {1,2,3,4,5};

    printf("%p\n",arr); // array address and array[0] address is same
    printf("%p\n",&arr[0]); // array address and array[0] address is same
    printf("%p\n",&arr[1]); // +4 byte
    printf("%p\n",&arr[2]); // +4 byte
    printf("%p\n",&arr[3]); // +4 byte
    printf("%p\n",&arr[4]); // +4 byte

    // means continuous memory address
}


void max_value(){
    int n; 
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    int max = arr[0];

    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    printf("\nmax:%d",max);
}

void second_max(){
    int arr[10] = {11,11,3,4,4,0,0,0,0,0};

    int max = -99999;
    int second_max = -99999;

    // for(int i=0; i<10; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }

    // for(int i=0; i<10; i++){
    //     if(arr[i]!=max && arr[i]>second_max){
    //         second_max = arr[i];
    //     }
    // }

    for(int i=0; i<10; i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        } else if(arr[i]>second_max && arr[i]!=max){
            second_max = arr[i];
        }
    }


    printf("%d",second_max);
}

void odd_even_pb(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++){
        if( i%2 == 0){
            arr[i] = arr[i]*2;
        }else{
            arr[i] = arr[i]*3;
        }
    }

    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }

    printf("\n%d", arr[0]);
    printf("\n%d", arr[1]);
}

void pair(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int pair=0;
    int match=12;

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            for(int k=j+1; k<10; k++){
                if(arr[i]+arr[j]+arr[k] == match){
                    pair++;
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }

        }
    }

    printf("%d",pair);
}

void reverse_copy(){
    int n=10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int rev[n];
    for(int i=0; i<n; i++){
        rev[i]= arr[n-1-i];
    }

    for(int l=0; l<n; l++){
        printf("%d ", rev[l]);
    }

}

void reverse_main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // Using while loop
    // int i=0, j=10-1;

    // while(i<=j){
    //     int temp = arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     j--;
    // }

    // using for loop
    int i=0, j=10-1;
    for(i, j; i<=j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int l=0; l<10; l++){
        printf("%d ", arr[l]);
    }
}

void rotate_array(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=32;

    k=k%n;

    for(int i=0, j=n-1; i<=j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=0, j=k-1; i<=j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=k, j=n-1; i<=j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int l=0; l<10; l++){
        printf("%d ", arr[l]);
    }

    // steps 
    // 1. k = k%n
    // 2. reverse full array (0,n-1)
    // 3. reverse first k elements (0,k-1)
    // 4. reverse remaining elements (k,n-1)
}

void duplicate(){
    int arr[10] = {9,2,9,2,5,6,7,8,9,10};
    int freq[100] = {0};

    for(int i=0; i<10; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<100; i++){
        if(freq[i]>1){
            printf("%d ",i);
        }
    }
}

void unique(){
    int arr[10] = {9,2,9,2,5,6,7,8,9,10};
    int freq[100] = {0};

    for(int i=0; i<10; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<100; i++){
        if(freq[i]==1){
            printf("%d ",i);
        }
    }
}


void uniqueElements() {
    int arr[10] = {9, -2, 9, 2, 5, -2, 6, 7, 8, 10};

    printf("Unique elements are: ");
    for (int i = 0; i < 10; i++) {
        int isDuplicate = 0;

        // check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) continue;

        // check if arr[i] appears later
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }
}




void duplicateElements() {
    int arr[10] = {9, 9, 9, 2, 5, 2, 6, 7, 8, 10};

    printf("Duplicate elements are: ");
    for (int i = 0; i < 10; i++) {
        int isDuplicate = 0;

        // check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // আগেই প্রিন্ট হয়েছে বা duplicate
                break;
            }
        }
        if (isDuplicate) continue;

        // check if arr[i] appears later
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // duplicate number
                break;
            }
        }

        if (isDuplicate==1) {
            printf("%d ", arr[i]); // duplicate number একবার প্রিন্ট
        }
    }
}


void duplicate_m1(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,1};

    for(int i=0; i<10-1; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
}

void duplicate_m2() {
    int arr[10] = {111,2,2,4,5,6,7,8,9,111};

    // Find max
    int max = arr[0];
    for(int i=0; i<10; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int brr[max+1];  

    for(int i=0; i<max+1; i++){
        brr[i] = 0;
    }

    // Count frequencies
    for(int i=0; i<10; i++){
        brr[arr[i]]++;
    }

    // Print frequency array (optional)
    for(int i=0; i<max+1; i++){
        printf("%d ", brr[i]);
    }

    printf("\nDuplicates: ");
    for(int i=0; i<max+1; i++){
        if(brr[i]>1){
            printf("%d ", i);
        }
    }
}

void duplicate_m3() {
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,10};

    int sum = 10*(10+1)/2;   // = 55
    int sum2 = 0;

    for(int i=0; i<11; i++){
        sum2 = sum2 + arr[i];
    }

    printf("%d", sum2-sum);

}

void two_elements_sum_of_target(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target=12;

    for(int i=0; i<10-1; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}

void two_elements_sum_target_using_m2(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target=12;

    int i=0;
    int j=10-1;

    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]<target){
            i++;
        }else{
            printf("%d %d\n",arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void push_zero_to_end(){
    int arr[10] = {0,1,0,2,0,3,0,4,0,5};
    int brr[10]={0};
    int idx=0;
    for(int i=0; i<10; i++){
        if(arr[i]!=0){
            brr[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0; i<10; i++){
        // arr[i] = brr[i];
        printf("%d ", brr[i]);
    }
}

void push_zero_with_bubble(){
    int arr[10] = {0,1,0,9,0,3,0,4,0,5};
    int n=10;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}



void right_shift(){
    int arr[3]= {10,20,30};
    int n=3;
    int temp = arr[n-1];

    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }

    arr[0]=temp;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void reverse(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int i=0;
    int j=n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++ ){
        printf("%d ", arr[i]);
    }
}

int main(){


    // right_shift();
    // reverse();

    // printArray();
    // userInputArray();
    // reverseprint();
    // roll_marks();
    // address();
    // max_value();
    // second_max();
    // odd_even_pb();
    // pair();
    // reverse_copy();
    // reverse_main();
    // rotate_array();
    // duplicate();
    // unique();
    // uniqueElements();
    // duplicateElements();
    // duplicate_m1();
    // duplicate_m2();
    // duplicate_m3();
    // two_elements_sum_of_target();
    // two_elements_sum_target_using_m2();
    // push_zero_to_end();
    // push_zero_with_bubble();




    return 0;
}
#include <stdio.h>

void BubbleSort(){
    int arr[5]={1,7,3,4,5};
    int n=5;

    for(int i=0; i<n-1; i++){
        int sorted = 1; // assume array is sorted
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted = 0;
            }
        }

        if(sorted==1){
            break;
        }
    }


    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    

}

void desendingBubbleSort(){
    int arr[5]={1,7,3,4,5};
    int n=5;

    for(int i=0; i<n-1; i++){
        int sorted = 1; // assume array is sorted
        for(int j=0; j<n-1-i; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted = 0;
            }
        }

        if(sorted==1){
            break;
        }
    }


    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

void selectionSort(){
    int arr[5]={1,7,3,1,5};
    int n=5;

    for(int i=0; i<n-1; i++){
        int min = 99999;
        int min_idx =-1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }


    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

void insertionSort(){
    
}

int main(){

    // BubbleSort();
    // desendingBubbleSort();
    selectionSort();

    return 0;
}
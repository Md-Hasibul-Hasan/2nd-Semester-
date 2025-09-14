    int arr[10] = {1,2,9,4,5,6,7,8,9,10};

    int sum = 10*(10+1)/2;   // = 55
    int sum2 = 0;

    for(int i=0; i<10; i++){
        sum2 = sum2 + arr[i];
    }

    printf("%d", sum2-sum);
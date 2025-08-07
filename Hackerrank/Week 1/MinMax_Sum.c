void miniMaxSum(int arr_count, int* arr) {
    long long sum = 0, min = arr[0], max = arr[0];
    
    for(int i = 0; i < arr_count; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        
    }
     printf("%lld %lld\n", sum - max, sum - min);

}


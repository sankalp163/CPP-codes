bool checkMaxHeap(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    int parentIndex;
    int leftChildIndex;
    int rightChildIndex;
    
    for(int i=0;i<n;i++){
        parentIndex=i;
        leftChildIndex=2*i + 1;
        rightChildIndex=2*i + 2;
        
        if(leftChildIndex < n && arr[parentIndex]<arr[leftChildIndex]){
            return false;
        }
        if(rightChildIndex < n && arr[parentIndex]<arr[rightChildIndex]){
            return false;
        }
        
    }
    return true;
}

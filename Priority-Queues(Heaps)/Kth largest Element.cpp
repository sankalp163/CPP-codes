#include<queue>
int kthLargest (vector<int> arr, int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    priority_queue<int> pq;
    
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int ans;
    
    for(int i=0;i<k;i++){
        if(i==k-1){
            ans=pq.top();
            return ans;
        }
        pq.pop();
        
    }
    
    
}


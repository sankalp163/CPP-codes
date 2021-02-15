#include<queue>
#include<unordered_map>
int FindDistinctCount(int arr[], int n,int k) {
/*Write your code here. 
*Don't write main().
*Don't take input, it is passed as function argument.
*Don't print output.
*Taking input and printing output is handled automatically.
*/ 
    priority_queue<int> pq;
    unordered_map<int,int> frequency;
    int distinctElements=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=1;i<=k;i++){
        pq.pop();
    }
    while(!pq.empty()){
        frequency[pq.top()]+=1;
        pq.pop();
    }
    
    for(int i=0;i<n;i++){
        if(frequency[arr[i]]>=1){
            distinctElements+=1;
            frequency[arr[i]]=0;
        }
    }
    
    return distinctElements;
    
    
}



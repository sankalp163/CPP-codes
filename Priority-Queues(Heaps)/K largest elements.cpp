#include<queue>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
     
	priority_queue<int,vector<int>,greater<int>> pq;	//This is the declaration of a min priority queue
    vector<int> ans;
    for(int i=0;i<n;i++){
        pq.push(input[i]);
    }
    
    for(int i=0;i<n-k;i++){
        pq.pop();
    }

    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;
}

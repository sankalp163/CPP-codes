#include<queue>
vector<int> kSmallest(int *input, int n, int k) {
	// Write your code here
    priority_queue<int> pq;
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

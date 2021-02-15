#include<queue>
vector<int> mergeKSortedArrays(vector<vector<int>*> input){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return the output.
     * Taking input and printing output is handled automatically.
     */
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<input.size();i++){
        for(int j=0;j<input[i]->size();j++){
            pq.push((*input[i])[j]);
        }
    }
    
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;

}

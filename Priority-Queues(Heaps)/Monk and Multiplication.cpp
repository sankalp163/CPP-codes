#include<queue>
void solve(int N, vector<int> A){
    /* Don't write main().
     * Don't read input, they are passed as function arguments.
     */
    priority_queue<int> pq;
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
        
        if(pq.size()<3)
            cout<<"-1"<<endl;
        
        else{
            long largest=pq.top();
            pq.pop();
            long secondLargest=pq.top();
            pq.pop();
            long thirdLargest=pq.top();
            pq.pop();
            
            long ans=largest*secondLargest*thirdLargest;
            
            cout<<ans<<endl;
            
            pq.push(largest);
            pq.push(secondLargest);
            pq.push(thirdLargest);
        }
    }
    
    return;
    
    
}

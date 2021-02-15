#include<queue>
void solve(int M, int N, vector<int> A){
	//Write your code here.
    
    /*Monk's favourite game is Football and his favourite club is "Manchester United".
    Manchester United has qualified for the Champions League Final which is to be held
    at the Wembley Stadium in London. So, he decided to go there and watch his favourite
    team play. After reaching the stadium, he saw that many people have lined up for the
    match tickets. He knows that there are M rows in the stadium with different seating 
    capacities. They may or may not be equal. The price of the ticket depends on the row.
    If the row has K(always greater than 0) vacant seats, then the price of the ticket 
    will be K pounds(units of British Currency). Now, every football fan standing in the
    line will get a ticket one by one.
	Given the seating capacities of different rows, find and return the maximum possible pounds that the club will gain with the help of the ticket sales.
	Assume input starts from index 1.
    */
    priority_queue<long> pq;
    long ans=0;
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
    }
    
    while(N>0 && !pq.empty()){
        long temp=pq.top();
        ans+=pq.top();
        pq.pop();
        pq.push(temp-1);
        N--;
    }
    
    cout<<ans;
    
}

class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    vector<int> helper(int V, vector<int> adj[], bool visited[]) {
        

        vector<int> output;
        queue<int> q;
        q.push(0);
        
        while(q.size() != 0) {
            int front = q.front();
            q.pop();
            
            visited[front] = true;
            output.push_back(front);
            
            for(auto x : adj[front]) {
                if(visited[x] == false) {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
        
        return output;
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    bool visited[V + 1];
	    for(int i = 0; i < V; i++)
	        visited[i] = false; 
	    return helper(V, adj, visited);
	}
};

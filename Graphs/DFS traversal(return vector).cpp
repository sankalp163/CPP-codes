class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	vector<int> output;
	vector<int> helper(int V, vector<int> adj[], bool visited[], int s) {
	    
	    
	    
	    if(visited[s] == false) {
	        visited[s] = true;
	        output.push_back(s);    
	    }
	    
	    for(auto x : adj[s]) {
	        if(visited[x] == false)
	            helper(V, adj, visited, x);
	    }
	    
	    return output;
	    
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    bool visited[V + 1];
	    
	    for(int i = 0; i < V; i++)
	        visited[i] = false;
	        
	    return helper(V, adj, visited, 0);
	}
};

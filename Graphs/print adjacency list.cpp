class Solution 
{
    public:
	//Function to return the adjacency list for each vertex.
	vector<vector<int>>printGraph(int V, vector<int> adj[]){
	    // Code here
	   vector<vector<int>> output;
	   
	    
	    for(int v = 0; v < V; ++v) {
	        vector<int> ans;
	        ans.push_back(v);
	        for(int x = 0; x < adj[v].size(); ++x) {
	            ans.push_back(adj[v][x]);
	        }
	        output.push_back(ans);
	            
	    }
        
        return output;
    
	}
};

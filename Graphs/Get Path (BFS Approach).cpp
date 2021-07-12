#include <iostream>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int> getPath(int** edges, int n, int v1,int v2,bool* visited){
    queue<int> pendingVertices;
    vector<int> path;
   /* bool* visited=new bool[n];
    
    //Initializing with '0' to avoid garbage values
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    */
    pendingVertices.push(v1);
    visited[v1]=true;
    
    unordered_map<int,int> prevEdge;
    
    while(!pendingVertices.empty()){
        int currentVertex=pendingVertices.front();
        if(currentVertex==v2){
            path.push_back(v2);
            break;
        }
        pendingVertices.pop();
        
        for(int i=0;i<n;i++){
            if(currentVertex==i)
                continue;
            if(edges[currentVertex][i]==1 && !visited[i]){
                
                    pendingVertices.push(i);
                    prevEdge[i]=currentVertex;
                    visited[i]=true;
                }
            }
        }
        int i=v2;
    	
    	if(path.size()==0){
            return path;
        }
        while(prevEdge[i]!=v1){
            path.push_back(prevEdge[i]);
            i=prevEdge[i];
        }
        
    	if(!path.empty())
        	path.push_back(v1);
        
        return path;
    }
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    
    if(n==0 && e==0){
        return NULL;
    }
    if(n>1 && e==0){
        for(int i=0;i<n;i++){
            cout<<i<<" ";
        }
        return NULL;
   }
    
    
    int** edges=new int*[n];
    
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        
        //Initializing with '0' to avoid garbage values
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        int f,s;
        
        cin>>f>>s;
        
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool* visited = new bool[n];

  	for(int i=0; i<n; i++){
    	visited[i]=false;
  	}
    int v1,v2;
    
    cin>>v1>>v2;
    vector<int> ans;
    ans=getPath(edges,n,v1,v2,visited);
    
    	for(int i=0;i<ans.size();i++){
       	 	cout<<ans[i]<<" ";
    	}
}

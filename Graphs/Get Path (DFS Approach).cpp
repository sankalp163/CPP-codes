#include<vector>
using namespace std;
vector<int> getPath(int** edges,int n,int v1,int v2,bool* visited){
    vector<int> path;
    if(v1==v2){
        path.push_back(v2);
        return path;
    }
    
	visited[v1]=true;
    
    for(int i=0; i<n; i++){
    	if(i==v1){
      		continue;
    	}
        if(visited[i])
            continue;
        if(edges[v1][i]==1){
        	path=getPath(edges,n,i,v2,visited);
            if(path.empty())
            	return path;
        	else{
            	path.push_back(v1);
            	return path;
        	}
        }
    }
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

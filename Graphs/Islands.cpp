#include<queue>
#include <iostream>
using namespace std;
vector<int> printBFS(int** edges,int n,int sv,bool* visited,vector<int> component){
    queue<int> pendingVertices;
    
    pendingVertices.push(sv);
    visited[sv]=true;
    
    while(!pendingVertices.empty()){
        int front=pendingVertices.front();
        pendingVertices.pop();
        component.push_back(front);
        
        for(int i=0;i<n;i++){
            if(front==i)
                continue;
            if(edges[front][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
    }
    return component;
}
vector<vector<int>> BFS(int** edges,int n){
	bool* visited=new bool[n];
    vector<int> component;
    vector<vector<int>> allComponents;
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	
	for(int i=0;i<n;i++){
		if(!visited[i]){
			component=printBFS(edges,n,i,visited,component);
            allComponents.push_back(component);
            while(!component.empty())
                component.pop_back();
        }
	}
    delete [] visited;
	return allComponents;
	
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    
    if(n==0 && e==0){
    	cout<<n;
        return NULL;
        
    }
    if(n==1 && e==0){
        cout<<n;
        return NULL;
    }
    if(n>1 && e==0){
        cout<<n;
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
    int f,s;
    for(int i=0;i<e;i++){
        
        cin>>f>>s;
        
        edges[f][s]=1;
        edges[s][f]=1;
    }
    vector<vector<int>> ans;
    ans=BFS(edges,n);
    cout<<ans.size();
    return  NULL;
}

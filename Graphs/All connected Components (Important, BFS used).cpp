#include <iostream>
#include<queue>
#include<vector>
#include <bits/stdc++.h> 

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
        return NULL;
    }
    if(n>1 && e==0){
        for(int i=0;i<n;i++){
            cout<<i<<" "<<endl; //There was a need of space after each element of a connected component therefore a space is being printed before moving to the next line
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
    int f,s;
    for(int i=0;i<e;i++){
        
        cin>>f>>s;
        
        edges[f][s]=1;
        edges[s][f]=1;
    }
    vector<vector<int>> ans;
    ans=BFS(edges,n);
    for(int i=0;i<ans.size();i++){
        sort(ans[i].begin(),ans[i].end());		//Lazy code- The output of each connected component had to be in increasing order hence the sort function. 
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return NULL;

}


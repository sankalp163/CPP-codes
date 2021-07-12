#include <iostream>
#include<queue>
using namespace std;
bool isConnected(int** edges,int n,int sv,bool* visited){
    queue<int> pendingVertices;
    pendingVertices.push(sv);
    visited[sv]=true;
    
    while(!pendingVertices.empty()){
        int currentVertex=pendingVertices.front();
        pendingVertices.pop();
        
        for(int i=0;i<n;i++){
            if(currentVertex==i)
                continue;
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]==false)
            return false;
    }
    return true;
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    
    if(n==0 && e==0){
        cout<<"true";
        return NULL;
    }
    if(n>1 && e==0){
        cout<<"false";
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
    bool* visited=new bool[n];
    
    //Initializing with '0' to avoid garbage values
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    
    int sv=f;
    bool res=isConnected(edges,n,sv,visited);
    
    if(res)
        cout<<"true";
    else
        cout<<"false";
}

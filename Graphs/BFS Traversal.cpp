#include <iostream>
#include<queue>
using namespace std;

void printBFS(int** edges,int n,int sv){
    queue<int> pendingVertices;
    
    bool* visited=new bool[n];
    
    //Initializing with '0' to avoid garbage values
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    pendingVertices.push(sv);
    visited[sv]=true;
    
    while(!pendingVertices.empty()){
        int front=pendingVertices.front();
        pendingVertices.pop();
        cout<<front<<" ";
        
        for(int i=0;i<n;i++){
            if(front==i)
                continue;
            if(edges[front][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
            
        }
    }
    delete [] visited;
    
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    
    if(n==0 && e==0){
        return NULL;
    }
    if(n>1 & e==0){
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
    
    
    
    printBFS(edges,n,0);
    
}

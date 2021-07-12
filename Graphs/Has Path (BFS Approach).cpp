#include<queue>
#include <iostream>
using namespace std;
void hasPath(int** edges,int n,int v1,int v2){
    if(v1==v2){
        cout<<"true";
        return;
    }
    
    queue<int> pendingVertices;
    
    bool* visited=new bool[n];
    
    //Initializing with '0' to avoid garbage values
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    pendingVertices.push(v1);
    visited[v1]=true;
    
    while(!pendingVertices.empty()){
        int front=pendingVertices.front();
        pendingVertices.pop();
        
        for(int i=0;i<n;i++){
            if(edges[front][v2]==1){
                cout<<"true";
                return;
            }
            if(edges[front][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
            
        }
    }
    delete [] visited;
    cout<<"false";
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
    
    int v1,v2;
    
    cin>>v1>>v2;
    
    hasPath(edges,n,v1,v2);
    
}

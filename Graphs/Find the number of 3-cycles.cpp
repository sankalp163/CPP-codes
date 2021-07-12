#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    
    if(n>=0 && e==0){
    	cout<<0;
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
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)
                continue;
            if(edges[i][j]==1){
                for(int k=0;k<n;k++){
                    if(k==j)
                        continue;
                    if(edges[j][k]==1){
                        if(edges[i][k]==1)
                            count++;
                    }
                }
            }
        }
    }
    delete [] edges;
    cout<<count/6;
}

int helper(vector<vector<int>> &cake,int n, int startx,int starty,bool** visited){
    int count=0;
    
    if(startx-1>=0 && cake[startx-1][starty]==1 && visited[startx-1][starty]==false){
        visited[startx-1][starty]=true;
        count+=helper(cake,n,startx-1,starty,visited);
    }
    if(startx+1<n && cake[startx+1][starty]==1 && visited[startx+1][starty]==false){
        visited[startx+1][starty]=true;
        count+=helper(cake,n,startx+1,starty,visited);
    }
    if(starty-1>=0 && cake[startx][starty-1]==1 && visited[startx][starty-1]==false){
        visited[startx][starty-1]=true;
        count+=helper(cake,n,startx,starty-1,visited);
    }
    if(starty+1<n && cake[startx][starty+1]==1 && visited[startx][starty+1]==false){
        visited[startx][starty+1]=true;
        count+=helper(cake,n,startx,starty+1,visited);
    }
    
    return count;
}
int getBiggestPieceSize(vector<vector<int>> &cake, int n) {
    // Write your code here
    if(n==0)
        return 0;
    int startx=0;
    int starty=0;
    bool** visited=new bool*[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cake[i][j]==1 && visited[i][j]==false){
                startx=i;
                starty=j;
                visited[startx][starty]=true;
                break;
            }
        }
    }
    int ans=0;
    ans= max(ans,helper(cake,n,startx,starty,visited));
    
    return ans+1;
    
}

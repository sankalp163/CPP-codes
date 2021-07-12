int minCount(int n)
{
	//Write your code here
    int *ans=new int[n+1];
    
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        
        ans[i]=INT_MAX;
        
        for(int j=1;i-(j*j)>=0;j++){
            ans[i]=min(ans[i],ans[i-(j*j)]);
        }
        ans[i]+=1;
    }
    int res=ans[n];
    delete [] ans;
    return res;
    
    
}

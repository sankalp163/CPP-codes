int helper(int n,int *ans)
{
	//Write your code here
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    if(ans[n]!=-1)
        return ans[n];
    int min=INT_MAX;
    for(int i=1;i*i<=n;i++){
        int output=helper(n-pow(i,2),ans);
        if(output<min)
            min=output;
    }
    
    ans[n]=min+1;
    return min+1;
}
int minCount(int n){
    int *ans=new int[n+1];
    
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    
    helper(n,ans);
}

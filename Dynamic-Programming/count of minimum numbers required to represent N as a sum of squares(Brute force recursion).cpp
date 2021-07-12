int minCount(int n)
{
	//Write your code here
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    int min=INT_MAX;
    for(int i=1;i*i<=n;i++){
        int ans=minCount(n-pow(i,2));
        if(ans<min)
            min=ans;
    }
    
    
    return min+1;
}

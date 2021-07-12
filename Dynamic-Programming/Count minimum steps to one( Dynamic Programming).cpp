int countStepsToOne(int n)
{
	//Write your code here
    int ans[n+1];
    
    ans[0]=0;
    ans[1]=0;
    ans[2]=1;
    ans[3]=1;
    
    for(int i=4;i<=n;i++){
        int first=ans[i-1];
        int second=INT_MAX;
        int third=INT_MAX;
        if(i%2==0)
            second=ans[i/2];
        if(i%3==0)
            third=ans[i/3];
        
        ans[i]=min(first,min(second,third))+1;
    }
    
    
    return ans[n];
}

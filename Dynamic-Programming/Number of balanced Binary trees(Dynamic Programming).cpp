int binaryTreesOfHeightH(int h) {
    // Write your code here
    int ans[h+1];
    
    ans[0]=1;
    ans[1]=1;
    
    int mod=int(pow(10,9))+7;
	
    for(int i=2;i<=h;i++){
        int temp1= int(((long)ans[i-1]*ans[i-1])%mod); 
    	int temp2=int((2*(long)ans[i-1]*ans[i-2])%mod);
	
    	ans[i]=(temp1+temp2)%mod;
    }
    
    return ans[h];
}

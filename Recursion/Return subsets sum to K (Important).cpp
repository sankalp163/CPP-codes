int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    if(n==0){
        if(k==0){
        	output[0][0]=0;
        	return 1;
        } 
        else{
            return 0;
        }
    }
    int O1[1000][50],O2[1000][50];
    
    int smallOutput1=subsetSumToK(input+1,n-1,O1,k-input[0]);
    int smallOutput2=subsetSumToK(input+1,n-1,O2,k);
    
    for(int i=0;i<smallOutput1+smallOutput2;i++){
        if(i<smallOutput1){
            int col=O1[i][0]+1;
        	output[i][0]=col;
        	output[i][1]=input[0];
            for(int j=2;j<col+1;j++){
            output[i][j]=O1[i][j-1];
        }
        
    }
        else{
            int col2=O2[i-smallOutput1][0];
        	output[i][0]=col2;
            for(int j=1;j<col2+1;j++){
            output[i][j]=O2[i-smallOutput1][j];
        }
    }

}
    return smallOutput1+smallOutput2;
}

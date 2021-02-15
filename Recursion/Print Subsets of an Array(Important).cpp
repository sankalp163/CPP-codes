void helper(int input[],int size,int output[],int m){
    if(size==0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int newOut[100];
    for(int i=0;i<m;i++){
        newOut[i]=output[i];
    }
    newOut[m]=input[0];
    
    helper(input+1,size-1,newOut,m+1);
    helper(input+1,size-1,output,m);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int m=0;
    int output[100];
    helper(input,size,output,m);
}



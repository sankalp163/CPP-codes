void helper(int input[],int size,int output[],int m,int k){
    if(size==0){
        if(k==0){
            for(int i=0;i<m;i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return;
        }
        else{
            return;
        }
    }
    
    int newOut[1000];
    for(int i=0;i<m;i++){
        newOut[i]=output[i];
    }
    newOut[m]=input[0];
    helper(input+1,size-1,newOut,m+1,k-input[0]);
    helper(input+1,size-1,output,m,k);
}
void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int m=0;
    int output[1000];
    helper(input,size,output,m,k);
}

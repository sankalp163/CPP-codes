void merge(int input[],int start,int mid,int end){
    int i,j,k;
    int n1=mid-start+1;
    int n2=end-mid;
    int input1[n1],input2[n2];
    
    for(i=0;i<n1;i++){
        input1[i]=input[start+i];
    }
    for(j=0;j<n2;j++){
        input2[j]=input[mid+1+j];
    }
    i=0;
    j=0;
    k=start;
    
    while(i<n1 && j<n2){
        if(input1[i]<=input2[j]){
            input[k]=input1[i];
            i++;
        }
        else{
            input[k]=input2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        input[k]=input1[i];
        i++;
        k++;
    }
    while(j<n2){
        input[k]=input2[j];
        j++;
        k++;
    }
    
}
void helper(int input[],int start, int end){
    if(start>=end){
        return;
    }
    else{
    int mid=(start+end)/2;
    
    helper(input,start,mid);
    helper(input,mid+1,end);
    
    merge(input,start,mid,end);
    }
}

void mergeSort(int input[], int size){
	// Write your code here
    int start=0;
    int end=size-1;
    helper(input,start,end);
        
}



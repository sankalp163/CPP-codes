#include<unordered_map>
int LengthOfLongestSeq(int arr[], int n){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_map<int,bool> seen;
    
    for(int i=0;i<n;i++){
        seen[arr[i]]=true;
    }
    
    int length=1;
    int maxLength=1;
    
    for(int i=0;i<n;i++){
        int inc=1;
        while(seen[arr[i]+inc]==true){		//This loop will be a bit repetitive since we will again and again go thorugh same sequences
            length++;
            inc++;
        }
        
        if(length>maxLength)
            maxLength=length;
        length=1;
        
    }
    
    return maxLength;
    
}

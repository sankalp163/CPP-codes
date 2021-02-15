#include<unordered_map>
int pairSum(int *arr, int n, int num)
{
	//Write your code here
    unordered_map<int,int> frequency;
    
    for(int i=0;i<n;i++){
        frequency[arr[i]]+=1;
    }
    
    int numOfPairs=0;
    
    for(int i=0;i<n;i++){
        if(frequency.count(num-arr[i])>0 && arr[i]==(num-arr[i])){
            numOfPairs+=((frequency[arr[i]]*(frequency[arr[i]]-1))/2);
        	frequency[arr[i]]=0;
        }
        if(frequency.count(num-arr[i])>0){
            numOfPairs+=(frequency[arr[i]]*frequency[num-arr[i]]);
            frequency[arr[i]]=0;
            frequency[num-arr[i]]=0;
        }
    }
    
    return numOfPairs;
}

#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
  
  // Write your code here
    std::unordered_map<int,int> cumulativeSum;
    int sum=0;
    int maxLength=0;
    int length=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(cumulativeSum.count(sum)>0){
            length=i-cumulativeSum[sum];
            if(length>maxLength){
                maxLength=length;
            }
        }
        else{
        	cumulativeSum[sum]=i;
        }
    }
    if(cumulativeSum.size()==1 && cumulativeSum.count(0)>0) //This is for the case if there is just one element in the array and that too is zero
        return 1;
    return maxLength;
    
}

#include<unordered_map>
void FindOccurance(int arr[],int size) {
	/*Write your code here.
	*Don?t write main(). 
	*Don?t take input, it is passed as function argument.
	*Print output as specified in question.
	*/
    unordered_map<int,int> frequency;
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<size;i++){
        frequency[arr[i]]+=1;
    }
    
    for(int i=0;i<size;i++){
        if(frequency[arr[i]]%2==0 && frequency[arr[i]]>0){
            evenCount++;
            frequency[arr[i]]=0;
        }
        else if(frequency[arr[i]]%2!=0 && frequency[arr[i]]>0){
            oddCount++;
            frequency[arr[i]]=0;
        }
    }
    
    cout<<oddCount<<" "<<evenCount;
    
}


#include<unordered_map>
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    sort(arr1,arr1+n);
    unordered_map<int,int> frequency;
    
    for(int i=0;i<m;i++){
        frequency[arr2[i]]+=1;
    }
    
    for(int i=0;i<n;i++){
        if(frequency[arr1[i]]>0){
            cout<<arr1[i]<<" ";
            frequency[arr1[i]]--;
        }
    }
    
}

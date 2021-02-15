#include <vector>
#include<unordered_map>
#include<climits>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    vector<int> ans;
    unordered_map<int,bool> seen;
    int maxLength=0;
    int start=arr[0];
    
    for(int i=0;i<n;i++){
        if(seen.count(arr[i])>0){
            continue;
        }

            seen[arr[i]]=true;
    
    }
    
    for(int i=0;i<n;i++){
        if(seen[arr[i]]==true){
            int length=0;
            int smallStart;
            int j=0;
            while(seen.count(arr[i]+j)>0 && seen[arr[i]+j]==true){
                length++;
                seen[arr[i]+j]=false;
                j++;
            }
            int k=1;
            while(seen.count(arr[i]-k)>0 && seen[arr[i]-k]==true){
                length++;
                seen[arr[i]-k]=false;
                k++;
            }
            k--;
            
            if(length>=maxLength && length>1){
                maxLength=length;
                if(k>=1){
                    start=arr[i]-k;
                }
                else
                    start=arr[i];
            }
        }
    }
    if(maxLength==0)
        maxLength=1;
    for(int i=0;i<maxLength;i++){
        ans.push_back(start+i);
    }
    
    return ans;
    
}

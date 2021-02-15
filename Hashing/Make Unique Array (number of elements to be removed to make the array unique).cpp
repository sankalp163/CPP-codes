#include<unordered_map>
int CountExtraElements(int arr[], int n) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_map<int,bool> seen;
    int countExtra=0;
    for(int i=0;i<n;i++){
        if(seen[arr[i]]==true){
            countExtra++;
        }
        else
            seen[arr[i]]=true;
    }
    return countExtra;
    
}


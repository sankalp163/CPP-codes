#include <unordered_map>
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
        unordered_map<int,int> frequency;
        
        for(int i=0;i<n;i++){
            frequency[input[i]]+=1;
        }
        int max_frequency=0;
        int max_ele;
        for(int i=0;i<n;i++){
            if(frequency[input[i]]>max_frequency){
                max_frequency=frequency[input[i]];
                max_ele=input[i];
            }
        }
        return max_ele;
     	
}

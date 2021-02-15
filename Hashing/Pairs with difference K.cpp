void printPairs(int *input, int n, int k) {
	// Write your code here
    unordered_map<int,int> frequency;
    
    for(int i=0;i<n;i++){
        frequency[input[i]]+=1;
    }
    
    for(int i=0;i<n;i++){
        if(k==0){
            if(frequency[input[i]]>1){
                for(int j=1;j<=(frequency[input[i]]*(frequency[input[i]]-1))/2;j++){
                    cout<<input[i]<<" "<<input[i]<<endl;
                }
                frequency[input[i]]=0;
            }
        }

        if(frequency.count(input[i]-k)>0 || frequency.count(input[i]+k)>0){
            if(frequency.count(input[i]-k)>0){
                for(int j=1;j<=frequency[input[i]]*frequency[input[i]-k];j++){
                    cout<<input[i]-k<<" "<<input[i]<<endl;
                }
                
            }
            if(frequency.count(input[i]+k)>0){
                for(int j=1;j<=frequency[input[i]]*frequency[input[i]+k];j++){
                    cout<<input[i]<<" "<<input[i]+k<<endl;
                	}
            	}
            frequency[input[i]]=0;
        	}
    	
    }

}


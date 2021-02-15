void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int> seen;
	    seen['!']=1;
	    seen['#']=1;
	    seen['$']=1;
	    seen['%']=1;
	    seen['&']=1;
	    seen['*']=1;
	    seen['@']=1;
	    seen['^']=1;
	    seen['~']=1;
	    for(int i=0;i<n;i++){
	        seen[nuts[i]]++;
	    }
	    
	    int j=0;
	    
	    for (auto i :seen){
             if(i.second >1){
                 nuts[j]=i.first;
                 bolts[j]=i.first;
                 j++;
             }
         }
	    
	    
	}

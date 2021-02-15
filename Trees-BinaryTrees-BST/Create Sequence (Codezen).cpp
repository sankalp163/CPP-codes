void printSequence(int n){
    //write your code here
    if(n==0){
        return;
    }
    
    printSequence(n-1);
    
    if((n-1)%10==2||(n-1)%10==5){
        int temp=n-1;
       while(temp>0){
        	if(temp/10==0){
            	cout<<n-1<<endl;
                break;
        	}
        	else{
            	temp=temp/10;
            	if(temp%10==2||temp%10==5){
                	continue;
            	}
                else{
                    break;
                }
        	}
    	}
	}
}


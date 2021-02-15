#include<string.h>
void removeX(char input[]) {
    // Write your code here
	if(strlen(input)==0){
        return ;
    }
  	removeX(input+1);
    
    if(input[0]=='x'){
        for(int i=0;i<strlen(input);i++){
            input[i]=input[i+1];
        }
    }
}


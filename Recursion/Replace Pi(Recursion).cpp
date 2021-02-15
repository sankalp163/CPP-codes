#include<string.h>
void replacePi(char input[]) {
	// Write your code here
 if(strlen(input)<=1){
     return ;
 }
    replacePi(input+1);
    if(input[0]=='p'&& input[1]=='i'){
        for(int i=strlen(input);i>=2;i--)
        {
            input[i+2]=input[i];
        }
    	input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
  
    

}




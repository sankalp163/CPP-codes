#include<string.h>
bool helper(char input[],int start,int end){
    if(strlen(input)==1){
        return true;
    }
    
    if(input[start]!=input[end]){
        return false;
    }
 	if(start<end+1){
    bool smallOutput=helper(input,start+1,end-1);
     return smallOutput;
    }
    
}

bool checkPalindrome(char input[]) {
    // Write your code here
 	helper(input,0,strlen(input)-1);

}


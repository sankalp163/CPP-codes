#include<string.h>
#include<math.h>
int helper(char input[], int size){
    
    
    if(size==1){
        return (int)input[0] -48;
    }
    
    int smallOutput=helper(input+1,size-1);
    int Output= ((int)input[0]-48)*pow(10,size-1) + smallOutput;
    
    
}
int stringToNumber(char input[]) {
    // Write your code here
	helper(input,strlen(input));
    
    
    
}

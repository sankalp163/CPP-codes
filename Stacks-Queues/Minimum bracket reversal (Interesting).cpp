#include<stack>
#include<string.h>
int countBracketReversals(char input[]){
	// Write your code here
    int count=0;
	if(strlen(input)%2!=0){
        return -1;
    }
    stack<char> s;
    int i=0;
    while(input[i]!='\0'){
        if(input[i]=='{'){
            s.push(input[i]);
            i++;
        }
        
        else if(input[i]=='}'){
            if(s.empty()){
                s.push(input[i]);
                i++;
            }
            else if(!s.empty() && s.top()!='{'){
                s.push(input[i]);
                i++;
            }
            else if(!s.empty() && s.top()=='{'){
                s.pop();
                i++;
                }
            }
        }
    while(!s.empty()){
        char c1=s.top();
        s.pop();
        char c2=s.top();
        s.pop();
        
        if(c1==c2){
            count++;
        }
        else{
            count+=2;
        }
    }
    return count;
}




#include<stack>
bool checkBalanced(char *exp) {
	// Write your code here
	int i=0;
    stack<char> s;
    while(exp[i]!='\0'){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            s.push(exp[i]);
        }
        else if(!s.empty() &&( exp[i]==')'||exp[i]=='}'||exp[i]==']')){
            if(s.top()=='(' && exp[i]==')'){
                s.pop();
            }
            else if(s.top()=='{' && exp[i]=='}'){
                s.pop();
            }
            else if(s.top()=='[' && exp[i]==']'){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(s.empty() && ( exp[i]==')'||exp[i]=='}'||exp[i]==']') ){
            return false;
        }
        i++;
    }
    
    if(exp[i]=='\0' && s.empty()){
        return true;
    }
    else{
        return false;
    }
}

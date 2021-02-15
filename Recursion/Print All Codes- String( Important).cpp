#include <string.h>
using namespace std;
int atoi(char a)
{
    int i=a-'0';
    return i;
}
char itoa(int i)
{
    char c='a'+i-1;
    return c;
}
void helper(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }

    helper(input.substr(1),output+itoa(atoi(input[0])));
    
    if((atoi(input[0])*10+atoi(input[1]))>=10 && (atoi(input[0])*10+atoi(input[1]))<=26){
        	
        helper(input.substr(2),output+itoa((atoi(input[0])*10+atoi(input[1]))));
    }
}
void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output;
    helper(input,output);
    
    
    
    
}

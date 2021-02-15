#include<unordered_map>
char* uniqueChar(char *str){
    // Write your code here
    unordered_map<char,bool> seen;
    char* output=new char[100];
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(seen[str[i]]==true){
            i++;
            continue;
        }
        else if(seen[str[i]]!=true){
        seen[str[i]]=true;
        output[j++]=str[i];
        i++;
        }
    }
    
    return output;
}

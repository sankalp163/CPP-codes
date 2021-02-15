#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;


char nonRepeatingCharacter(string str){
  
  //Write your code here
  
    unordered_map<char,int> frequency;
    
    for(int i=0;i<str.size();i++){
        frequency[str[i]]+=1;
    }
    
    for(int i=0;i<str.size();i++){
        if(frequency[str[i]]==1)
            return str[i];
    }

}


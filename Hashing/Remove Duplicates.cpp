#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    unordered_map<int,int> frequency;
    vector<int> output;
    for(int i=0;i<input.size();i++){
        if(frequency.count(input[i])==0){
        	frequency[input[i]]+=1;
        	output.push_back(input[i]);
        }
    }
    return output;

}


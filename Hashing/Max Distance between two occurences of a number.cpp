#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int maxDistance(vector<int> input){

  // Write your code here
    unordered_map<int,int> firstSeen;
    unordered_map<int,int> lastSeen;
    int distance=0;
    int maxDistance=0;
    for(int i=0;i<input.size();i++){
        if(lastSeen.count(input[i])>0){
            lastSeen[input[i]]=i;
        }
        else{
            firstSeen[input[i]]=i;
            lastSeen[input[i]]=i;
        }
    }
    
    for(int i=0;i<input.size();i++){
        distance=lastSeen[input[i]]-firstSeen[input[i]];
        
        if(distance>maxDistance)
            maxDistance=distance;
    }
    
    return maxDistance;

}


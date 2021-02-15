#include<iostream>
#include<string.h>
using namespace std;
int subsequences(string input,string output[]){
	if(input.size()==0){
		return 1;
	}
	string SubString=input.substr(1);
	int smallOutput=subsequences(SubString,output);
	for(int i=0;i<smallOutput;i++){
		output[i+smallOutput]=input[0]+ output[i];
	}
	
	return 2*smallOutput;
}
int main(){
	string input;
	string*output=new string[1000];
	
	cin>>input;
	int size=subsequences(input,output);
	
	for(int i=0;i<size;i++){
		cout<<output[i]<<endl;
	}
}

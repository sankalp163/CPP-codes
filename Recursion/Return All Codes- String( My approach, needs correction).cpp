int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    if(input.size()==0){
    	output[0]=" ";
        return 1;
    }
    int num1=input[0]-'0';
    char ch1=97+num1-1;
    int num2=input[1]-'0';
    int d=(num1*10)+num2;
    char ch2=97+num2-1;
    string result1[10000];
    string result2[10000];
    
    int smallAns1=getCodes(input.substr(1),result1);
    
    if(d>=10 && d<=26){
    	int smallAns2=getCodes(input.substr(2),result2);
    }
    for(int i=0;i<smallAns1+smallAns2;i++){
        if(i<smallAns1){
        	output[i]=ch1+result1[i];
        }
        else{
            output[i]=ch2+result2[i-smallAns1];
        }
    }
    return smallAns1+smallAns2;
    
}

string getString(int d){
	if(d==2){
		return "abc";
	}
	if(d==3){
		return "def";
	}
	if(d==4){
		return "ghi";
	}
	if(d==5){
		return "jkl";
	}
	if(d==6){
		return "mno";
	}
	if(d==7){
		return "pqrs";
	}
	if(d==8){
		return "tuv";
	}
	if(d==9){
		return "wxyz";
	}
	return " ";
}
void printKeypadHelper(int num,string output){
	if(num==0){
		cout<<output<<endl;
		return;
	}
	
	int lastDigit=num%10;
	int smallNumber=num/10;
	
	string options= getString(lastDigit);
	for(int i=0;i<options.length();i++){
		printKeypad(smallNumber,options[i]+output);
		
	}
}

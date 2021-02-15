int countZeros(int n) {
    // Write your code here
    
    if(n==0){
        return 1;
    }
    if(n<10 && n>0){
        return 0;
    }
    int lastDigit=n%10;
    int smallOutput=countZeros(n/10);
    int Output=smallOutput;
    
    if(lastDigit==0){
        return Output+1;
    }
    else{
        return Output;
    }
   

}




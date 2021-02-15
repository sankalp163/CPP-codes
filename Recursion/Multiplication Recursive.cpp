int multiplyNumbers(int m, int n) {
    // Write your code here
    if(m==0 || n==0)
    {
        return 0;
    }
    int smallOutput=multiplyNumbers(m,n-1);
    int Output=m+smallOutput;
    
    return Output;

}

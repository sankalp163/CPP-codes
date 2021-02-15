int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==1||n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int smallOutput1=staircase(n-1);
    int smallOutput2=staircase(n-2);
    int smallOutput3=staircase(n-3);
    
    return smallOutput1+smallOutput2+smallOutput3;
    
    
    
    
}

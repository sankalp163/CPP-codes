int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size==0)
    {
        return -1;
    }
    int smallOutput=lastIndex(input+1,size-1,x);
    int Output=smallOutput; 
    if(Output==-1 && input[0]==x)
    {
        return 0;
    }
    if(Output==-1 && input[0]!=x)
    {
        return Output;
    }
   
    else{
        return Output+1;
    }
        
    

}


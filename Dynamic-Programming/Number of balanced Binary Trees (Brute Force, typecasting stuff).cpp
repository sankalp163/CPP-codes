#include<math.h>
int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */
    if(h<=1)
        return 1;
    
    int mod=int(pow(10,9))+7;
    int x=balancedBTs(h-1);
    int y=balancedBTs(h-2);
    
    /*
    here we are typecasting one of the variables as 'long' to ensure
	that the buffer memory being created is of type 'long' so that after
	multiplication our answer does not go out of range of the buffer memory
	and as soon as we use mod to bring our answer back in range, we typecast
	it into an integer to store in an integer variable. 
    */
    int temp1= int(((long)x*x)%mod); 
    int temp2=int((2*(long)x*y)%mod);
	
    int ans=(temp1+temp2)%mod;
    
    return ans;


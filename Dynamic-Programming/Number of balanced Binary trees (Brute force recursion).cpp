#include<math.h>
int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */
    if(h<=1)
        return 1;
    
    int mod=int(pow(10,9))+7;	//The answer can be huge, so return output modulus 10^9 + 7.
    long x=balancedBTs(h-1);	//long data type used to ensure answer does not go out of range
    long y=balancedBTs(h-2);
    
    long temp1= (x*x)%mod;
    long temp2=(2*x*y)%mod;
	
    int ans=int((temp1+temp2)%mod);		//we know that now our answer would be within range for int data type so we typecast to return an 'int'
    
    return ans;

}

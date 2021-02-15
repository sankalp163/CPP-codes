int josephus(int n, int k)
{
   //Your code here
   if(n==1){
       return 1;
   }
   
   int ans=(josephus(n-1,k)+k-1)%n+1;
   
   return ans;
}


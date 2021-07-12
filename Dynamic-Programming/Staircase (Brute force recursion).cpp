long staircase(int n)
{
	//Write your code here
    if(n==1 ||n==0){
        return 1;
    }
    else if(n==2)
        return 2;
    

    	return staircase(n-1)+staircase(n-2)+staircase(n-3);
    
}

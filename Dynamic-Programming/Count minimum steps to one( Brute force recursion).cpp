int countMinStepsToOne(int n)
{
	//Write your code here
    if(n==1){
        return 0;
    }
    
    int first=countMinStepsToOne(n-1);
    int second=INT_MAX;
    int third=INT_MAX;
    if(n%2==0)
        second=countMinStepsToOne(n/2);
    
    if(n%3==0)
        third=countMinStepsToOne(n/3);
    
    return min(first,min(second,third))+1;
    
}

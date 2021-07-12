int minCostPath(int **input, int m, int n)
{
	//Write your code here
    if(m==0 ||n==0)
        return INT_MAX;
    if(m==1 && n==1)
        return input[0][0];
	else
        return input[m-1][n-1]+ min(minCostPath(input,m-1,n),min(minCostPath(input,m,n-1),minCostPath(input,m-1,n-1)));
}

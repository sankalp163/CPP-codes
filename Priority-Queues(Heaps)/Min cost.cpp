#include<queue>
int minCost(int arr[], int n)
{
	/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
    priority_queue<int,vector<int>,greater<int>> p_queue;
    int minCost=0;
    for(int i=0;i<n;i++){
        p_queue.push(arr[i]);
    }
    
    int res = 0;
    while (p_queue.size() > 1)  { // iterate till q size has atleast one element

        int first = p_queue.top(); // extract 1st min from priority queue
        p_queue.pop();

        int second = p_queue.top(); // extract 2nd min from priority queue
        p_queue.pop();

        res += first + second; // accumulate first and second in result.

        p_queue.push(first + second); // push accumulated result to priority queue.
    }
    return res;
}


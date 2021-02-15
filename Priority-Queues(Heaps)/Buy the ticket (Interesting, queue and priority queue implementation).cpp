#include<queue>
int buyTicket (int *arr, int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    queue<int> indexKeeper;
    priority_queue<int> priorityKeeper;
    
    for(int i=0;i<n;i++){
        indexKeeper.push(i);
        priorityKeeper.push(arr[i]);
    }
    
    int timeTaken=0;
    
    while(!indexKeeper.empty()){
        if(arr[indexKeeper.front()]==priorityKeeper.top()){
            timeTaken++;
            if(indexKeeper.front()==k){
                break;
            }
            indexKeeper.pop();
            priorityKeeper.pop();
            
        }
        int temp=indexKeeper.front();
        indexKeeper.pop();
        indexKeeper.push(temp);
    }
    
    return timeTaken;
    
}

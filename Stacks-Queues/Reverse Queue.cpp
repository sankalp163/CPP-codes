void reverseQueue(queue<int> &q) {
	// Write your code here
    int arr[q.size()-1];
    int i=0;
    while(!q.empty()){
        arr[i]=q.front();
        q.pop();
        i++;
    }
    i--;
    while(i>=0){
        q.push(arr[i]);
        i--;
    }

}

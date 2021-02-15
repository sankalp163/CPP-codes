void reverseStack(stack<int> &input, stack<int> &extra) {
	// Write your code here
	int arr[input.size()-1];
    int i=0;
    while(!input.empty()){
        arr[i]=input.top();
        input.pop();
        i++;
    }
    i--;
    while(i>=0){
        extra.push(arr[i]);
        i--;
    }
    while(!extra.empty()){
        input.push(extra.top());
        extra.pop();
    }
}

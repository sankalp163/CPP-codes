int indexOfNRecursive(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL||(head->next==NULL&&head->data!=n)){
        return -1;
    }
    if(head->data==n){
        return 0;
    }
    
    
    
    int smallOutput=indexOfNRecursive(head->next,n);
    if(smallOutput!=-1)
    	return smallOutput+1;
    else
        return -1;
}

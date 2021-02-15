Node<int> *rearrangeEvenOdd(Node<int> *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    Node<int>*temp1=head;
    Node<int>*temp2=head->next;
    Node<int>*h2=head->next;
    
    while(temp1->next!=NULL && temp1->next->next!=NULL && temp2->next!=NULL && temp2->next->next!=NULL){
        temp1->next=temp1->next->next;
        Node<int>*a=temp1->next;
        temp1=a;
           
        
        temp2->next=temp2->next->next;
        Node<int>*b=temp2->next;
        temp2=b;
                
      }
    
    temp1->next=h2;
    
    temp2->next=NULL;
    
    return head;
      

}


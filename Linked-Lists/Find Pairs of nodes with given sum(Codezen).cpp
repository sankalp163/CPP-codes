void pairSum(Node<int>* head, int x) {
	// Write your code here
    Node<int>*start=head;
    Node<int>*end=head;
    //Taking end pointer to point at the last node
    while(end->next!=NULL){
        end=end->next;
    }
    
    while(end->data>start->data){
        if(start->data+end->data==x){
            cout<<start->data<<" "<<end->data<<endl;
            start=start->next;
            end=end->prev;
        }
        else if(start->data+end->data>x){
            end=end->prev;
        }
        else{
            start=start->next;
        }
    }
    
}


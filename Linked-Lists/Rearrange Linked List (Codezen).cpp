void reverse(Node<int>* &head){
    Node<int>*curr=head;
    Node<int>*prev=NULL;
    Node<int>*fwd;
    
    while(curr){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    
    head=prev;
}

Node<int>* rearrange(Node<int> *head){
	// Write your code here
    Node<int>*slow=head;
	Node<int>*fast=head;

	while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
	Node<int>*mid=slow;
	Node<int>*h2=mid->next;
	mid->next=NULL;
	//delete slow;
	//delete fast;
	reverse(h2);
	
	Node<int>*temp1=head;
	Node<int>*temp2=h2;
	
	while(temp1!=NULL && temp2!=NULL){
        Node<int>*a=temp1->next;
        temp1->next=temp2;
        Node<int>*b=temp2->next;
        temp2->next=a;
        
        temp1=a;
        temp2=b;
        
    }

	return head;
	
}


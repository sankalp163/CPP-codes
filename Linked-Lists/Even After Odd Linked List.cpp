node* arrange_LinkedList(node* head)
{
    //write your code here
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*oddh=NULL;
    node*oddt=NULL;
    node*evenh=NULL;
    node*event=NULL;
    
    
    node* temp=head;
    //All even
    int count=0;
    
    temp=head;

    while(temp!=NULL){
        	if(temp->data%2==0){
            	if(evenh==NULL){
             		evenh=event=temp;   
            	}
           	 else{
            	event->next=temp;
            	event=temp;
            }
        }
        else{
			if(oddh==NULL){
                oddh=oddt=temp;
            }            
        
        	else{
            	oddt->next=temp;
            	oddt=temp;
        	}
    }
        temp=temp->next;
}
    if(evenh==NULL||oddh==NULL){
        return head;
    }
    oddt->next=evenh;
    event->next=NULL;
    
    return oddh;
    
    
}

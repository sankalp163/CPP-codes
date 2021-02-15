int findNode(Node *head, int n)
{
    //Write your code here
    int count=0;
    Node*temp=head;
    if(temp==NULL){
        return -1;
    }
    while(temp->data!=n&&temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    if(temp->next!=NULL){
        return count;
    }
    else{
        return -1;
    }
}

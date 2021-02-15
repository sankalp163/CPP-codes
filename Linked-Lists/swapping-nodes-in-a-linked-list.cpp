class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=head;
        int numOfNodes=1;
        while(temp->next!=NULL){
            numOfNodes++;
            temp=temp->next;
        }
        
        int kthFromEnd=numOfNodes-k+1;
        int i=1;
        temp=head;
        
        while(i!=kthFromEnd && temp!=NULL){
            temp=temp->next;
            i++;
        }
        
        ListNode* end=temp;
        
        temp=head;
        i=1;
        
        while(i!=k && temp!=NULL){
            temp=temp->next;
            i++;
        }
        
        ListNode* start=temp;
        
        if(start!=NULL && end!=NULL)
            swap(start->val,end->val);
        
        return head;
    }
};
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* prev=NULL; //prev will be maintained to point to the (a-1)th position node
        ListNode* temp2=list2;
        
        //counter variable will be keep check for ath position and then bth position
        int counter=0;
        
        
        while(counter!=a){
            prev=temp1;
            temp1=temp1->next;
            counter++;
        }
        
        //connecting (a-1)th node of list1 to head of list2
        prev->next=temp2;
        
         while(counter!=b){
            temp1=temp1->next;
             counter++;
        }
        
        //now temp1 will point to (b+1)th position
        temp1=temp1->next;
        
        //reaching tail of list2
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        
        //connecting tail of list2 to (b+1)th position
        temp2->next=temp1;
        
        
        return list1;
        
    }
};
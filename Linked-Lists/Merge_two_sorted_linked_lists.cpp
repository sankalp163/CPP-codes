/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1==NULL && l2==NULL)
           return NULL;
        if(l1==NULL && l2!=NULL)
            return l2;
        if(l1!=NULL && l2==NULL)
            return l1;
        ListNode* temp1=l1;
        ListNode*temp2=l2;
        
        ListNode* finalHead=NULL;
        ListNode* finalTail=NULL;
        
        finalHead=temp1->val <= temp2->val?temp1:temp2;
        
        finalTail=finalHead;
        
        if(finalHead==temp1){
                temp1=temp1->next;
            
        }
        else{
            temp2=temp2->next;
        }
        
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <=temp2->val){
                finalTail->next=temp1;
                finalTail=temp1;
                temp1=temp1->next;
            }
            else{
                finalTail->next=temp2;
                finalTail=temp2;
                temp2=temp2->next;
            }
        }
        
        while(temp1!=NULL){
            finalTail->next=temp1;
            finalTail=temp1;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            finalTail->next=temp2;
            finalTail=temp2;
            temp2=temp2->next;
        }
        
        finalTail->next=NULL;
        
        return finalHead;
    }
};
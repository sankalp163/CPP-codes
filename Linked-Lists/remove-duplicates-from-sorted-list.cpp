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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newHead=head;
        ListNode* newTail=head;
        ListNode* temp=head->next;
        
        while(temp!=NULL){
            if(newTail->val!=temp->val){
                newTail->next=temp;
                newTail=temp;
            }
            else
                temp=temp->next;
        }
        
        newTail->next=NULL;
        
        return newHead;
    }
};
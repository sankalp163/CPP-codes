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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int ans=0;
        int numOfDigits=0;
        while(temp!=NULL){
            temp=temp->next;
            numOfDigits++;
        }
        
        temp=head;
        
        while(temp!=NULL){
            ans+=pow(2,numOfDigits-1)*temp->val;
            numOfDigits--;
            temp=temp->next;
        }
        
        return ans;
        
        
    }
};
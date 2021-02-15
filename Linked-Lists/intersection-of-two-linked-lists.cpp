/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        
        int lengthA=0;
        int lengthB=0;
        int diffLen=0;
        
        while(tempA!=NULL){
            tempA=tempA->next;
            lengthA++;
        }
        
        while(tempB!=NULL){
            tempB=tempB->next;
            lengthB++;
        }
        
        if(lengthB>=lengthA){
            diffLen=lengthB-lengthA;
            tempB=headB;
            for(int i=1;i<=diffLen;i++){
                tempB=tempB->next;
            }
            tempA=headA;
            
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        
        if(lengthA > lengthB){
            diffLen=lengthA-lengthB;
            tempA=headA;
            for(int i=1;i<=diffLen;i++){
                tempA=tempA->next;
            }
            tempB=headB;
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        
        return tempA;
        
        
        
        
        
    }
};
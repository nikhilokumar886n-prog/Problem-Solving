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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return NULL;
        }
        ListNode *slow=head;
        ListNode *fast=slow->next;
        
        while(fast!=slow and fast!=NULL){
            fast=fast->next;
            if(fast==NULL){
                break;
            }
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==NULL){
            return NULL;
        }
        fast=head;
        slow=slow->next;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;


    }
};
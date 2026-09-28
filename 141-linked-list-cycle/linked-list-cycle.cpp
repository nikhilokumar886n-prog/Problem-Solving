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
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return 0;
        }
        ListNode *slow=head;
        ListNode *fast=slow->next;
        
        while(fast!=NULL and  fast!=slow){
            fast=fast->next;
            if(fast==NULL){
                break;
            }
            slow=slow->next;
            fast=fast->next;
        }
        if(fast==NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
};
//M-1 map
//M-2 fast,slow 

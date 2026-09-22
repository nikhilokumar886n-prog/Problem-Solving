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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* a=NULL;
        ListNode* b=head;
        ListNode* c=b->next;
        int x=1;
        while(b!=NULL and b->next!=NULL){
            c=b->next;
            if(a==NULL){
                b->next=c->next;
                c->next=b;
                if(x>0){
                    head=c;
                    x--;
                }
            }
            else{
                b->next=c->next;
                a->next=c;
                c->next=b;
            }
            a=b;
            b=b->next;
        }
        return head;
    }
};
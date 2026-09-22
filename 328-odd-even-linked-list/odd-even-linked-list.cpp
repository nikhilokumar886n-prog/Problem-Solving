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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL or head->next->next==NULL){
            return head;
        }
        ListNode* tail=head;
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            tail=temp;
            temp=temp->next;
            n++;
        }
        ListNode* a=head;
        ListNode* b=head;
        int l=n/2;
        while(l>0){
            b=a->next;
            a->next=b->next;
            b->next=NULL;
            tail->next=b;
            tail=b;
            a=a->next;
            l--;
        }
        return head;
    }
};
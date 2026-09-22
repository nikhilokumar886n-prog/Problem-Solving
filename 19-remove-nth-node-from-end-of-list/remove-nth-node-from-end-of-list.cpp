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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){ 
            return NULL;
        }
        int m=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            m++;
        }
        if(m==n){
            ListNode* temp=head->next;
            head->next=NULL;
            head=temp;
            return head;
        }
        int l=m-n-1; //no of time pointer move
        temp=head;
        while(l!=0){
            temp=temp->next;
            l--;
        }
        ListNode* a=temp;
        ListNode* b=a->next;
        a->next=b->next;
        b->next=NULL;
        return head;
    }
};
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
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int c=1;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        int k=c-n;
        int p=0;
        if(k==0){
            return head->next;
        }
        temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(p==k){
                prev->next=prev->next->next;
                break;
            }
            p++;
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};
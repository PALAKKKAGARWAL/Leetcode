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
    ListNode* deleteMiddle(ListNode* head) {
       if(head==NULL){
        return head;
       }
       if(head->next==NULL){
        return NULL;
       }
        ListNode*  temp=head;
        ListNode* prev =NULL;
        int c=1;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        int k= c/2;
        int p=0;
        temp=head;
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
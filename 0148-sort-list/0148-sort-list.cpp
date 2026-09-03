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
    ListNode* findMiddle(ListNode* head){
        ListNode* start=head;
        ListNode* end=head->next;
        while(end!=NULL && end->next!=NULL){
            start=start->next;
            end=end->next->next;
        }
        return start;
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* temp=dummy;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                temp->next=l1;
                l1=l1->next;
            }else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1!=NULL){
            temp->next=l1;
        }else{
            temp->next=l2;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* mid=findMiddle(head);
        ListNode* righthead= mid->next;
        mid->next=NULL;
        ListNode* left=sortList(head);
        ListNode* right=sortList(righthead);
        return merge(left,right);
    }
};
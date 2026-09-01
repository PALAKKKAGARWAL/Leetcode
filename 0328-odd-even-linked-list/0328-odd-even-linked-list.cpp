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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* start = head;
        ListNode* end = head->next;
        ListNode* join=end;
        while(end!=NULL && end->next!=NULL){
            start->next=end->next;
            start=start->next;

            end->next=start->next;
            end=end->next;
        }
        start->next=join;
        return head;
    }
};
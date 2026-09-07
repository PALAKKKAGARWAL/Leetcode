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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        // ListNode* start = head;
        // ListNode* end=head;
        // ListNode* prev =NULL;
        // while(end->next!=NULL){
        //     prev=end;
        //     end=end->next;
        // }
        ListNode* temp = head;
        int n =1;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        k=k%n;
        while(k>0){
            ListNode* start = head;
            ListNode* end=head;
            ListNode* prev =NULL;
            while(end->next!=NULL){
            prev=end;
            end=end->next;
           }
           
            prev->next=NULL;
            end->next=start;
            head=end;
            
            k--;
        }
        return head;
    }
};
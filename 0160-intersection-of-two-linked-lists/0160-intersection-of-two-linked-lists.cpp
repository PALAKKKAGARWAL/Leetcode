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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL && headB==NULL){
            return NULL;
        }
        ListNode* temp=headA;
        int c=1;
        while(temp->next!=NULL){
           temp=temp->next;
           c++;
        }
        temp=headB;
        int p=1;
        while(temp->next!=NULL){
           temp=temp->next;
           p++;
        }
        ListNode* start1=headA;
        ListNode* start2=headB;
        int k=0;
        if(p>c){
            k=p-c;
            while(k>0){
                start2=start2->next;
                k--;
            }
        }else{
            k=c-p;
            while(k>0){
                start1=start1->next;
                k--;
            }
        }
        while(start1!=NULL){
            if(start1==start2){
                return start1;
            }
            start1=start1->next;
            start2=start2->next;
        }
        return 0;
        
    }
};
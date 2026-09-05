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
    ListNode* reversell(ListNode* l1){
        ListNode* start=l1;
        ListNode* prev = NULL;
        while(start!=NULL){
            ListNode* nextnode = start->next;
            start->next= prev;
            prev = start;
            start=nextnode;
        }
        return prev;
    }
    ListNode* getKnode(ListNode* temp,int k){
             k -=1;
             while(temp!=NULL && k>0){
                k--;
                temp=temp->next;
             }
             return temp;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevlast=NULL;
        while(temp!=NULL){

            ListNode* kthnode = getKnode(temp,k);
            if(kthnode==NULL){
                if(prevlast) prevlast->next=temp;
                break;
            }
            ListNode* nextNode = kthnode->next;
            kthnode->next=NULL;
            reversell(temp);
            if(temp==head){
                head=kthnode;
            }else{
                prevlast->next = kthnode;
            }
            prevlast=temp;
            temp=nextNode;
        }
        return head;
        
    }
};
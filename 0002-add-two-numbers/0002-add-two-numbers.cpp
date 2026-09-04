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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* add1 = l1;
        ListNode* add2 = l2;
        int c =1;
        while(add1->next!=NULL){
            add1=add1->next;
            c++;
        }
        int p =1;
        while(add2->next!=NULL){
            add2=add2->next;
            p++;
        }
        int k=0;
        if(p>c){
            k=p;
        }else{
            k=c;
        }
        add1=l1;
        add2=l2;
        int carry=0;
        int add=0;
        ListNode* dummy= new ListNode(0);
        ListNode* temp=dummy;
        while(k>0){
            int value=carry;
            if(add1 != NULL) {
                value += add1->val;
                add1 = add1->next;
            }

            if(add2 != NULL) {
                value += add2->val;
                add2 = add2->next;
            }
            if(value<10){
                add = value;
                carry=0;
            }else{
                add = value-10;
                carry=1;
            }
           ListNode* newnode=new ListNode(add);
           temp->next=newnode;
           temp=temp->next;
           
           k--;

        }
        if(carry==1){
            ListNode* newwie = new ListNode(1);
            temp->next=newwie;
        }
        return dummy->next;

    }
};
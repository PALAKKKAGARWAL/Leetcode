/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertatmiddle(Node* head){
        Node* temp = head;
        
        while(temp!=NULL){
        Node* nextelement = temp->next;
        Node* newnode = new Node(temp->val);
        newnode->next = nextelement;
        temp->next=newnode;
        temp=nextelement;
    }
    }
    void connectRandom(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* copynode = temp->next;
            if(temp->random){
                copynode->random = temp->random->next;
            }else{
                copynode->random = NULL;
            }
            temp=temp->next->next;
        }
    }
    Node* copiedlist(Node* head){
        Node* temp = head;
        Node* dummynode = new Node(-1);
        Node* res = dummynode;
        while(temp!=NULL){
            res->next = temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummynode->next;
    }

    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        insertatmiddle(head);
        connectRandom(head);
        return copiedlist(head);
    }
};
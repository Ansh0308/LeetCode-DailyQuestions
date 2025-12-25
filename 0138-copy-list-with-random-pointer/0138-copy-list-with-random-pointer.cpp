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
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return head;
        Node* newHead=new Node(head->val);
        Node* newtp=newHead;
        Node* oldtp=head->next;

        while(oldtp!=nullptr){
            
            Node* temp=new Node(oldtp->val);
            newtp->next=temp;
            newtp=newtp->next;
            oldtp=oldtp->next;
        }
        newtp=newHead;
        oldtp=head;
        unordered_map<Node*,Node*> mapping;
        while(oldtp!=nullptr){
            mapping[oldtp]=newtp;
            oldtp=oldtp->next;
            newtp=newtp->next;
        }
        newtp=newHead;
        oldtp=head;
        while(oldtp!=nullptr){
            if(oldtp->random==nullptr){
                newtp->random=nullptr;
            }
            else{
                newtp->random=mapping[oldtp->random];
            }
            oldtp=oldtp->next;
            newtp=newtp->next;
        }
        return newHead;

    }
};
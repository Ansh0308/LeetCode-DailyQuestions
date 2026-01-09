/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head)return head;
        Node* temp=head;
        Node* prev_=temp;
        stack<Node*> aft;
        while(temp!=nullptr){
            if(temp->child!=nullptr){
                if(temp->next!=nullptr){
                aft.push(temp->next);}
                temp->next=temp->child;
                temp->child->prev=temp;
                temp->child=nullptr;
            }
            prev_=temp;
            temp=temp->next;
        }
        while(!aft.empty() && prev_!=nullptr){
            if(prev_->next==nullptr && !aft.empty()){
                Node* tem=aft.top();
                prev_->next=tem;
                tem->prev=prev_;

                aft.pop();
            }
            prev_=prev_->next;
        }
        return head;
        
    }
};
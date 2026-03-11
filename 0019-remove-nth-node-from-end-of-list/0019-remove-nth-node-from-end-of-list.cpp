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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return head;
        int size=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            size++;
            temp=temp->next;
            
        }
        if(size==1)return nullptr;
        int curr=1;
        temp=head;
        while(curr<size-n && temp!=nullptr){
            temp=temp->next;
            curr++;
        }
        if(size==n){
            head=head->next;
            return head;
        }
        if(temp->next!=nullptr){
        temp->next=temp->next->next;}
        
        return head;
    }
};
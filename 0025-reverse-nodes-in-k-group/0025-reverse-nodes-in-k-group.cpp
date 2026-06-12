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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)return head;
        int count=0;
        
        ListNode* temp=head;
        while(temp!=nullptr && count<k){
            count++;
            temp=temp->next;
        }
        if(count<k)return head;
        ListNode* after=reverseKGroup(temp,k);
        ListNode* curr=head;
        ListNode* prev=after;
        ListNode* next=nullptr;
        count=0;
        while(curr!=nullptr && count<k){
            count++;
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
};
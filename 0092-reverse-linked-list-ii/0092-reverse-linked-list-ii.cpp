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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)return head;
        ListNode* temp_p=nullptr;
        ListNode* temp_c=head;
        for(int i=1;i<left;i++){
            temp_p=temp_c;
            temp_c=temp_c->next;
        }
        ListNode* curr=temp_c;
        ListNode* Prev=nullptr;
        ListNode* Next=nullptr;
        for(int i=left;i<=right;i++){
            Next=curr->next;
            curr->next=Prev;
            Prev=curr;
            curr=Next;
        }
        if(temp_p!=nullptr){
            temp_p->next=Prev;
        }
        
        temp_c->next=curr;
        return (temp_p == nullptr) ? Prev : head;
    }
};
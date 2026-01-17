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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        
        int count=0;
        ListNode* temp=head;
        ListNode* Next=temp->next;
        ListNode* after=swapPairs(temp->next->next);
        temp->next=after;
        Next->next=temp;
        return Next;
        
        
    }
};
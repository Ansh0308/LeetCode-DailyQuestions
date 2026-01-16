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

    ListNode* reverseKGroup_(ListNode* head, int k){
        ListNode* temp=head;
        int count=0;
        while(count<k){
            if(temp==nullptr)return head;
            count++;
            temp=temp->next;
        }
        ListNode* after=reverseKGroup_(temp,k);
        temp=head;
        count=0;
        ListNode* Next=temp->next;
        while(count<k){
            temp->next=after;
            after=temp;
            temp=Next;
            if(Next==nullptr)break;
            Next=Next->next;
            count++;
        }
        return after;


    }    
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseKGroup_(head, k);
        
        
    }
};
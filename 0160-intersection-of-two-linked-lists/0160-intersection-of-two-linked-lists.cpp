/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> sets;
        ListNode* temp=headA;
        while(temp!=nullptr){
            sets.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp!=nullptr){
            if(sets.find(temp)!=sets.end())return temp;
            temp=temp->next;
        }
        return nullptr;
        
    }
};
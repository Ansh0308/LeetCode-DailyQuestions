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
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        int carry=0;
        while((l1!=nullptr && l2!=nullptr) || carry!=0){
            int L1=(l1)?l1->val:0;
            int L2=(l2)?l2->val:0;
            int num= L1+L2+carry;
            carry=num/10;
            temp->next=new ListNode(num%10);
            temp=temp->next;
           if(l1) l1=l1->next;
            if(l2)l2=l2->next;
        }
        while(l1){
             temp->next=new ListNode(l1->val);
            temp=temp->next;
            l1=l1->next;

        }
        while(l2){
             temp->next=new ListNode(l2->val);
            temp=temp->next;
            l2=l2->next;

        }
        return ans->next;
    }
};
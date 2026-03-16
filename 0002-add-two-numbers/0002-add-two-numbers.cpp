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
        if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;
        ListNode* Temp=new ListNode(0);
        ListNode* newHead=Temp;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        while(temp1!=nullptr && temp2!=nullptr){
            int sum=carry+temp1->val+temp2->val;
            carry=sum/10;
            Temp->next=new ListNode(sum%10);
            temp1=temp1->next;
            temp2=temp2->next;
            Temp=Temp->next;

        }
        while(temp1!=nullptr){
            int sum=carry+temp1->val;
            carry=sum/10;
            Temp->next=new ListNode(sum%10);
            Temp=Temp->next;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            int sum=carry+temp2->val;
            carry=sum/10;
            Temp->next=new ListNode(sum%10);
            Temp=Temp->next;
            temp2=temp2->next;
        }
        if(carry!=0)Temp->next=new ListNode(carry);
        return newHead->next;
        
        
    }
};
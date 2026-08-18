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
        // unordered_set<ListNode*> sets;
        // ListNode* temp=headA;
        // while(temp!=nullptr){
        //     sets.insert(temp);
        //     temp=temp->next;
        // }
        // temp=headB;
        // while(temp!=nullptr){
        //     if(sets.find(temp)!=sets.end())return temp;
        //     temp=temp->next;
        // }

        //Optimised
        ListNode* temA=headA;
        ListNode* temB=headB;
        int m=1,n=1;
        while(temA->next!=nullptr){
            temA=temA->next;
            m++;
        }
        while(temB->next!=nullptr){
            temB=temB->next;
            n++;
        }
        temA=headA;
        temB=headB;
        if(m>n){
            int diff=m-n;
            
            while(diff!=0){
                temA=temA->next;
                diff--;

            }
            
        }
        else{
            int diff=n-m;
            while(diff!=0){
                temB=temB->next;
                diff--;
                
            }

        }
        while(temA!=temB){
            temA=temA->next;
            temB=temB->next;
        }

        return temA;
        
    }
};
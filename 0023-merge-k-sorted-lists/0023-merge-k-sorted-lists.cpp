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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> vt;
        for(ListNode* heads: lists){
            if(heads==nullptr)continue;
            
            ListNode* temp=heads;
            while(temp!=nullptr){
                vt.push_back(temp->val);
                temp=temp->next;
            } 
        }
        if(vt.size()==0)return nullptr;
        sort(vt.begin(),vt.end());
        ListNode* pt=new ListNode(vt[0]);
        ListNode* ans=pt;
        for(int i=1;i<vt.size();i++){
            pt->next=new ListNode(vt[i]);
            pt=pt->next;
            


        }
        return ans;
        
    }
};
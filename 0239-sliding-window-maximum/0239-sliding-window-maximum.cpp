class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        deque<int> window;
        int Max=INT_MIN;
        // for(int i=0;i<0+k;i++){
        //     window.push_back(nums[i]);
        //     Max=max(Max,nums[i]);


        // }
        // ans.push_back(Max);
        // for(int i=k;i<n;i++){
        //     window.pop_front();
        //     window.push_back(nums[i]);
        //     auto ele = max_element(window.begin(), window.end());
        //     ans.push_back(*ele);
           

        // }
        for(int i=0;i<k;i++){
            while(!window.empty() && nums[window.back()]<=nums[i])window.pop_back();
            window.push_back(i);
        }
        
        for(int i=k;i<n;i++){
            ans.push_back(nums[window.front()]);
            //remove ele from the deque not in the current window 
            while(!window.empty() && window.front()<=i-k)window.pop_front();
            while(!window.empty() && nums[window.back()]<=nums[i])window.pop_back();
            window.push_back(i);
        }
         ans.push_back(nums[window.front()]);
        return ans;
        
    }
};















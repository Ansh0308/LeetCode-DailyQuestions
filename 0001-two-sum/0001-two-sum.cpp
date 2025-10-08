class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ma;
        for(int i=0;i<nums.size();i++){
            int first_ele=nums[i];
            int second_ele=target-first_ele;
            if(ma.find(second_ele)!=ma.end()){
                return {i,ma[second_ele]};
            }
            ma[first_ele]=i;

        }
        return {-1,-1};
    //     vector<pair<int,int>> s;
    //     for(int i=0;i<nums.size();i++){
    //         s.push_back({nums[i],i});
    //     }
    //     sort(s.begin(),s.end());
    //     int start=0,end=nums.size()-1;
    //     while(start<=end){
    //         if(s[start].first+s[end].first==target)return{s[start].second,s[end].second};
    //         if(s[start].first+s[end].first>=target){
    //             end--;
    //         }
    //         else{
    //             start++;
    //         }
            
    //     }

        
    //    return {-1,-1}; 
    
    }
};
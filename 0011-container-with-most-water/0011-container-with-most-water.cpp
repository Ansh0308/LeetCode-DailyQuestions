class Solution {
public:
   
    int maxArea(vector<int>& height) {
        int area=INT_MIN;
        int n=height.size();
        int i=0,j=n-1;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            area=max(area,w*h);
            
            if(height[i]<height[j])i++;
            else{
                j--;
            }
        }
        return area;
        
    }
};
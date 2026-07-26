/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    const n=height.length;
    let ans=0;
    let i=0,j=n-1;
    while(i<=j){
        const h=Math.min(height[i],height[j]);
        const w=j-i;
        ans=Math.max(ans,h*w);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
};
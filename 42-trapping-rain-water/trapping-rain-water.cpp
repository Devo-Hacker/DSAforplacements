class Solution {
public:
    int trap(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxleft = 0;
        int maxright = 0;
        int collectedwater = 0;
        while(start < end){
            maxleft = max(height[start], maxleft);
            maxright = max(height[end], maxright);
            if(maxleft < maxright){
                collectedwater += maxleft - height[start];
                start++;
            }
            else{
                collectedwater += maxright - height[end];
                end--;
            }
        }
        return collectedwater;
    }
};
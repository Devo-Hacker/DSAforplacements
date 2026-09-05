class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> mini(n);

        mini[n-1] = nums[n-1];

        for(int i = 1; i < n; i++) {
            mini[n-i-1] = min(nums[n-i-1], mini[n-i]);
        }

        int maxi = nums[0];

        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);

            int diff = maxi - mini[i];

            if(diff <= k) {
                return i;
            }
        }

        return -1;
    }
};
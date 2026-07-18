class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minim = *min_element(nums.begin(), nums.end());
        int maxim = *max_element(nums.begin(), nums.end());
        return gcd(minim, maxim);
    }
};
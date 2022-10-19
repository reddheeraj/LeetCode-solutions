class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        vector<int> T(n, 0);
        T[0] = nums[0];
        int maxsum = T[0];
        for (int i = 1; i < n; ++i) {
            T[i] = max(T[i-1] + nums[i], nums[i]);  
            maxsum = max(T[i], maxsum);
        }
        return maxsum;
    }
};
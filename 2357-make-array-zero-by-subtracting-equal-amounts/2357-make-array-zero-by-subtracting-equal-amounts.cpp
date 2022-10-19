int SUM(vector<int>& nums) {
    int sum = 0;
    for (auto &n: nums) 
        sum += n;
    return sum;
}

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        while(SUM(nums)) {
            int small = 9999;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < small && nums[i] != 0) small = nums[i];
            }
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    nums[i] = nums[i] - small;   
                }
            }
            ans++;
        }
        return ans;
    }
};
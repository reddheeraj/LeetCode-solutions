#pragma GCC optimize('O2')
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};
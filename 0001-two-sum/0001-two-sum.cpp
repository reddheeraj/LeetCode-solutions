#pragma GCC optimize('O2')
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> visit;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int find_num = target - nums[i];
            if (visit.count(find_num)) {
                return {visit[find_num],i};
            }
            visit[nums[i]] = i;
        }
        return {};
    }
};
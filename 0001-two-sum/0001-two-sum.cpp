#pragma GCC optimize('O2')
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> visit;
        for(int i = 0; i < nums.size(); i++) {
            int find_num = target - nums[i];
            if (visit.count(find_num)) {
                return {visit[find_num],i};
            }
            visit[nums[i]] = i;
        }
        return {};
    }
};
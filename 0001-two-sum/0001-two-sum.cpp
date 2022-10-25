#pragma GCC optimize('O2')
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> visit;
        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int find_num = target - n;
            if (visit.count(find_num)) {
                return {visit[find_num],i};
            }
            visit[n] = i;
        }
        return {};
    }
};
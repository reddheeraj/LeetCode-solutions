#pragma GCC optimize("O2")
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = 0, last = 0;
        bool flaga = false;
        if (nums.size() == 1) {
            if (target == nums[0]) {
                vector<int> arr = {0,0};
                return arr;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                first = i;
                flaga = true;
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                last = i;
            }
        }
        
        cout<<first<<" "<<last<<endl;
        cout<<flaga<<" "<<endl;
        if (flaga) {
            vector<int> arr = {first,last};
            return arr;
        }
        else {
            vector<int> arr = {-1,-1};
            return arr;
        }
    }
};
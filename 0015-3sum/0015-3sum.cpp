class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());     
        if(nums.size() < 3){                
            return {};
        }
        if(nums[0] > 0){                    
            return {};
        }
        vector<vector<int>> ans;
        unordered_map<int,int> hashMap;
        for(int i = 0 ; i < nums.size() ; ++i){     
            hashMap[nums[i]] = i;
        }
        for(int i = 0 ; i < nums.size() - 2 ; ++i){     
            if(nums[i] > 0) {     
                break;
            }
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j) {
                int required = -1*(nums[i] + nums[j]);   
                if(hashMap.count(required) && hashMap.find(required)->second > j) { 
                    ans.push_back({nums[i] , nums[j] , required});
                }
                j = hashMap.find(nums[j])->second;
            }
            i = hashMap.find(nums[i])->second;
        }
        return ans;
    }
};
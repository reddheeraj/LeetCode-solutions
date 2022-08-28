class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                counter++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        cout<<"counter: "<<counter<<endl;
        for(int i = 0; i < counter; i++) {
            nums.push_back(0);
        }
        for(auto i: nums) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};




    
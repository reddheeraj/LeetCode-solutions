class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //vector<int> one;
        for(int i = 0 ; i < n ; i++)
            nums1[i + m] = nums2[i]; 
        
//         for (int i = 0; i < m; i++) {
//             if (nums1[i] != 0) {
//                 one.push_back(nums1[i]);
//             }
//         }
        
//         int size1 = nums1.size() - one.size();
//         for (int i = 0; i < size1; i++) {
//             nums1.pop_back();
//         }
//         one.clear();
//         for (int i = 0; i < n; i++) {
//             if (nums2[i] != 0) {
//                 one.push_back(nums2[i]);
//             }
//         }
//         int size2 = nums2.size() - one.size();
//         for (int i = 0; i < size2; i++) {
//             nums2.pop_back();
//         }
        
        
//         for (auto &i: one) {
//             nums1.push_back(i);
//         }
        sort(nums1.begin(), nums1.end());
    }
};
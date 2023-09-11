#include<bits/stdc++.h>
#pragma GCC optimize("O2")

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int n = nums.size();
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
    
    void reverse(vector<int>& nums, int start, int end) {
//         list<int> l;
        
//         for(int i = 0; i < v.size(); i++) {
//             l.push_back(v[i]);
//         }
//         while(k--) {
//             int temp = l.back();
//             l.pop_back();
//             l.push_front(temp);
//         }
        
//         for(int i = 0; i < v.size(); i++) {
//             v[i] = l.front();
//             l.pop_front();
//         }
        
    
        while(start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    

        
    }
};
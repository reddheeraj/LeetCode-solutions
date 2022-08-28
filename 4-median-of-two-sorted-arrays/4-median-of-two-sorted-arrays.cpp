#pragma GCC optimize("O2")
double find_median_of_array(vector<int> n) {
    sort(n.begin(), n.end());
    int size = n.size();
    if(size % 2 == 0) {
        double mid = size / 2;
        double mid1 = n[mid];
        double mid2 = n[mid-1];
        double median = (mid1 + mid2) / 2;
        return median;
    } else {
        double mid = size / 2;
        return n[mid];
    }
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> merged;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                cout<<nums1[i]<<" ";
                merged.push_back(nums1[i]);
                i++;
            } else {
                cout<<nums2[j]<<" ";
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()) {
            merged.push_back(nums1[i]);
            cout<<nums1[i]<<" ";
            i++;
        }
        while(j < nums2.size()) {
            merged.push_back(nums2[j]);
            cout<<nums2[j]<<" ";
            j++;
        }
        
        double val = find_median_of_array(merged);
        return val;
    }
};

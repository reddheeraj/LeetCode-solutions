int binarySearch(int X,int l,int r,vector<int>&numbers){
    while(l<=r){
        int mid = (l+r)/2;
        if(numbers[mid] == X)return mid;
        else if(numbers[mid] > X)r = mid-1;
        else l= mid+1;
    }
    return -1;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int  n = numbers.size();
        for(int i=0;i<n;i++){
            int diff = target - numbers[i];
            int x = binarySearch(diff,0,n-1,numbers);
            if(x!=i && x!=-1){
                result.push_back(i+1);
                result.push_back(x+1);
                sort(result.begin(),result.end());
                return result;
            }
        }
        return result;
    }
};
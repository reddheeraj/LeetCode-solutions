class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, last = s.size() - 1;
        for(i = 0; i < s.size()/2; i++) {
            char temp = s[i];
            s[i] = s[last];
            s[last] = temp;
            last--;
        }
        for(auto i:s) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
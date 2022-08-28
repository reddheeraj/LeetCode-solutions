class Solution {
public:
    bool isValid(string s) {
        stack<int> check;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if (check.empty()) {
                check.push(s[i]);
            }
            else if (check.top() == '(' && s[i] == ')' || check.top() == '{' && s[i] == '}' || check.top() == '[' && s[i] == ']')
                check.pop();
            else {
                check.push(s[i]);
            }
        }
        if (check.empty()) {
            return true;
        }
        else return false;
    }
};
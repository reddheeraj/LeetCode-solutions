#include<bits/stdc++.h>
#pragma GCC optimize("O2")
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;
        
        return (ceil(log2(n)) == floor(log2(n)));
    }
};
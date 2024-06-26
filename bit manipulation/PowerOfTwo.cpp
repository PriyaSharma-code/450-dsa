//https://leetcode.com/problems/power-of-two/
//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2x.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return ceil(log2(n)) == floor(log2(n));
    }
};

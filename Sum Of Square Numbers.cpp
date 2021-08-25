class Solution {
public:
    bool judgeSquareSum(int c) {
        size_t hi = (int)sqrt(c), lo = 0;
        
        while (lo <= hi) {
            int curr = lo * lo + hi * hi;
            if (curr == c) return true;
            else if (curr < c) lo++;
            else hi--;
        }
        
        return false;
    }
};

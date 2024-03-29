class Solution {
public:
    int divide(int dividend, int divisor) {
		// use long long to store intermediate variable.
        long long res = 0;
        long long m = abs((long long) dividend);
        long long n = abs((long long) divisor);
        
        while (m >= n) {
            long long s = n, tmp = 1;
            while ((s << 1) < m) {
                s <<= 1;
                tmp <<= 1;
            }
            res += tmp;
            m -= s;
        }
        
        res = (dividend > 0) ^ (divisor > 0) ? -res : res;
        return res > 0 ? (res > INT_MAX ? INT_MAX : res) : (res < INT_MIN ? INT_MIN : res);
    }
};

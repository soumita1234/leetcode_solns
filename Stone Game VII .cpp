class Solution {
public:
    int stoneGameVII(vector<int>& S) {
        int N = S.size();
        vector<int> dpCurr(N), dpLast(N);
        for (int i = N - 2; ~i; i--) {
            int total = S[i];
            dpLast.swap(dpCurr);
            for (int j = i + 1; j < N; j++) {
                total += S[j];
                dpCurr[j] = max(total - S[i] - dpLast[j], total - S[j] - dpCurr[j-1]);
            }
        }
        return dpCurr[N-1];
    }
};

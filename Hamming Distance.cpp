class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int res = x^y;
        int cnt=0;
        
        while(res > 0)
        {
            res&=(res-1);
            cnt++;
        }
        return cnt;
    }
};

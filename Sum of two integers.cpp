class Solution {
public:
    int getSum(int a, int b) {
        int c=0;
        int ret=0;
        for(int i=0;i<32;i++) {
            int x = (a>>i)&(0x1);
            int y = (b>>i)&(0x1);
            ret |= (x^y^c)<<i;
            c= x&y | c&y | c&x;
        }
        return ret;
    }
};

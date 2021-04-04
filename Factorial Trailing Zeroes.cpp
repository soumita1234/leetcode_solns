class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int power=5;
        while(n/power>0){
            ans+=(n/power);
            power*=5;
        }
        return ans;
    }
};

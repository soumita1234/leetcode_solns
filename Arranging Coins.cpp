class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0){
            return 0;
        }
        if(n==1) return 1;
        int current=1;
        int remain=n-1;
        while(remain>=current+1){
            current++;
            remain=remain-current;
        }
        return current;
    }
};

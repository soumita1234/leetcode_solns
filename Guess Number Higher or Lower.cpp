class Solution {
public:
    int guessNumber(int n) {
        long long beg = 1, end = n;
        long long mid = (beg+end) / 2;
        while(beg <= end){
            if(guess(mid) == 1)
                beg = mid + 1;
            else if(guess(mid) == 0)
                break;
            else if(guess(mid) == -1)
                end = mid - 1;
            mid = (beg + end) / 2;
        }
        return mid;
    }
};

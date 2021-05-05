class Solution {
public:
    bool canJump(vector<int>& nums) {
        int possible=0;
        for(int i=0;i<nums.size();i++){
            if(possible<i)
                return false;
            possible=max(possible,i+nums[i]);
        }
        return true;
    }
};

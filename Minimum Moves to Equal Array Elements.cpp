class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minimum = INT_MAX;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(minimum>nums[i])
                minimum=nums[i];
        }
        for(int i=0;i<n;i++){
            c+=nums[i]-minimum;
        }
        return c;
    }
};

 

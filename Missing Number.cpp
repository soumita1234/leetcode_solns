class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]!=nums.size()){
            return nums.size();
        }
        else if(nums[0]!=0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            int ans=nums[i-1]+1;
            if(nums[i]!=ans){
                return ans;
            }
        }
        return -1;
    }
};

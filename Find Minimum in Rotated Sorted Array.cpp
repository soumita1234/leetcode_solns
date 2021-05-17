class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       for(int i=n-1; i>0;i--){
           if(nums[i-1]>nums[i])
               return nums[i];
           
       }
    return nums[0];
    }
};

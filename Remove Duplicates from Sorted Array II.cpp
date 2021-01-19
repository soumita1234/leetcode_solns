class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=2;
        if(n<=2)
            return n;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[index-2] || nums[i]!=nums[index-1])
                nums[index++]=nums[i];
        }
        return index;
    }
};

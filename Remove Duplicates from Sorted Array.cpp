class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int r = 0;
        for (int i = 1; i < nums.size(); i ++) {
            if (nums[r] != nums[i]) {
                nums[++r] = nums[i]; // copy-in next unique number
            }
        }
        return r+1;
    }
};

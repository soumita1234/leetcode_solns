class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if((int)nums.size() == 0) return ans;
        string temp;
        int i = 0, j = 1;
        while(i < (int)nums.size()) {
            temp = "";
            while(j < (int)nums.size() && nums[j] == nums[j - 1] + 1) j++;
            if(i != j - 1) temp = to_string(nums[i]) + "->" + to_string(nums[j - 1]);
            else temp = to_string(nums[i]);
            ans.push_back(temp);
            i = j;
            j = i + 1;
        }
        return ans;
    }
};

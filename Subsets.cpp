class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> curr;
        generateSubsets(nums, output, curr, 0);
        return output;
    }
    
private:
	void generateSubsets(const vector<int>& nums, vector<vector<int>>& output, vector<int>& curr, int idx) {
        output.emplace_back(curr);
        for (int i = idx; i < size(nums); ++i) {
            curr.emplace_back(nums[i]);
            generateSubsets(nums, output, curr, i + 1);
            curr.pop_back();
        } 
    }   
};

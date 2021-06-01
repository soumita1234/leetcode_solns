class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        do {
            vector<int> v = nums;
            vec.push_back(v);
        } 
      while(next_permutation(nums.begin(), nums.end()));
        
        return vec;
    }
};

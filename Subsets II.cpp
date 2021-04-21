class Solution {
public:
    set<vector<int>>subsets; // initialising set
    void helper(int index,vector<int>&current, vector<int>&nums)
    {
        subsets.insert(current); //inserting current array to the result
        for(int i=index;i<nums.size();i++)
        {
            current.push_back(nums[i]); // add the current element to consider the subsets corresponding to it
            helper(i+1,current,nums);  //generate subsets for this array
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>current;
        helper(0,current,nums);
        vector<vector<int>>ans(subsets.begin(),subsets.end()); //make vector from set
        return ans; //return answer
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       
       vector<int>v;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]<=n&&nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                v.push_back(i+1);
        }
        return v;
    }
};


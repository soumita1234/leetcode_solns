class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        int max_val = INT_MIN;
        for(int i = 0;i<nums.size();i++)
        {
            int j = i + 1;
            int count = 1;
            while(j < nums.size())
            {
                if((nums[i] + 1) == nums[j])
                {
                    i++;
                    j++;
                    count++;
                }
                else if(nums[i] == nums[j])
                {
                    i++;
                    j++;
                }
                else
                    break;
            }
            max_val = max(max_val,count);
        }
        return max_val;

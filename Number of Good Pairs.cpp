class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int l=nums.size();
        int count=0;
        for(int i=0;i<l;i++){
            for(int j=1;j<l;j++)
                if(nums[i]==nums[j]){
                    if(i<j)
                        count ++;}
        }
        return count;
    }
};

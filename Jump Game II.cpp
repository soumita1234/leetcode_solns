class Solution {
public:
    int jump(vector<int>& nums) {
        int x=0,y=0,ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(y<i)
                return -1;
            y=max(i+nums[i],y);
            if(x==i)
            {
                x=y;
                ans++;
            }
        }
        return ans;
    }
};

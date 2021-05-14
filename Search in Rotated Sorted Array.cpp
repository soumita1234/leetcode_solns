class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;
        bool x=false;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans=i;
                x=true;
            }
        
        }
        
        if(x==false){
            return -1;
        }
        return ans;
    }
};






class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int s = 0;
        int e = n-1;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[s]<=nums[mid])
            {
                if(nums[s] <= target && target <= nums[mid])
                {
                    e = mid-1;
                }
                else
                {
                    s = mid+1;
                }
            }
            else
            {
                if(nums[mid] <= target && target <= nums[e])
                {
                    s = mid+1;
                }
                else
                {
                    e = mid-1;
                }
            }
        }
        
        return -1;
        
    }
};

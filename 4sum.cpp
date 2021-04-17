class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    if(nums.empty())
    return res;
    int n=nums.size();
    
    sort(nums.begin(),nums.end()); 
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int remain;
            remain=target-nums[i]-nums[j];
            int f=j+1;
            int b=n-1;
            while(f<b)
            {
                int two_sum=nums[f]+nums[b];
                if(remain<two_sum) // decrement from end
                b--;
                else if(remain>two_sum) // increment from start
                f++;
                else
                 {
                 vector<int> ans(4,0);
                 ans[0]=nums[i];
                 ans[1]=nums[j];
                 ans[2]=nums[f];
                 ans[3]=nums[b];
                 res.push_back(ans);
				 
                 while(f<b && nums[f]==ans[2])
                     f++;
                 while(f<b && nums[b]==ans[3])
                     b--;
                }
                
             while(j+1<n && nums[j+1]==nums[j])
                j++;
            }
			
         while(i+1<n && nums[i+1]==nums[i])
            i++;  
        }
    }
       return res; 
    }
};

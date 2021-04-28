// NAIVE APPROACH

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs((long long)nums[i]-nums[j])<=t){
                    if(abs(i-j)<=k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};



//2nd

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
    {
        multiset<long> ms;
        for(size_t i = 0; i < nums.size(); i++)
        {
            
            long valMin = (long)nums[i] - (long)t;
            
            auto iter = ms.lower_bound(valMin);
            
            if(iter != ms.end() && *iter <= (long)nums[i] + (long)t)
                return true;
            
           
            ms.insert(nums[i]);
            if(ms.size() > k)
                ms.erase(ms.find(nums[i - k]));
        }
        return false;
    }

};

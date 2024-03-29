class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<int> st;
        for(int i=n-1;i>=0;i--){
            st.insert(nums[i]);
            if(st.size()==3)
                break;
        }
        if(st.size()<3)
            return *max_element(nums.begin(),nums.end());
        else
            return (*(st.begin()));
        
    }
};


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size() < 3)
            return nums[0];
        
        return nums[2];
        
    }
};


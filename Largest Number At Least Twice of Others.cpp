class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int x=*max_element(nums.begin(),nums.end()); 
        int index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)index=i;
            if(nums[i]+nums[i]>x && nums[i]!=x)return -1;
        }
            
            return index;
    }
};


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        

        int maxIndex = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (maxIndex != i && nums[maxIndex] < 2 * nums[i])
                return -1;
        }
        return maxIndex;
        
    }
};

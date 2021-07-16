class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // make this or get WA for empty string
        int r = 0;
        for (int i = 1; i < nums.size(); i ++) {
            if (nums[r] != nums[i]) {
                nums[++r] = nums[i]; // do ++r or if r++..It will give 2,1 rather than 1,2 
            }
        }
        return r+1;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) 
            return 0;
        int i=0;
    
    for(int j=1;j<nums.size();j++){
        
        if(nums[i]!=nums[j]){
            
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
    }
};

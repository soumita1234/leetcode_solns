//1st  method
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Sorting Method
        int n=nums.size();
        if(n<3)
            return nums[0];
        sort(nums.begin(),nums.end());
        if(nums[0]!=nums[1])
            return nums[0];
        int i=1;
        while(i<n){
            if(nums[i]!=nums[i-1])
                return nums[i-1];
            i=i+3;
        }
        return nums[i-1];
    }
};

//2nd method
class Solution {
public:
    int singleNumber(vector<int>& nums) {
 //XOR + AND Method
        int ones=0;
        int twos=0;
        for(auto it:nums){
            ones=(ones^it) & (~twos);
            twos=(twos^it) & (~ones);
        }
        return ones;
    }
};

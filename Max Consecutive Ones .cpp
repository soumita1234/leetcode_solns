class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int maxi=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c=0;}
            else{
                c++;}
        
        maxi=max(maxi,c);
        }
        return maxi;
    }
};

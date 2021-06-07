class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        for(int i=0;i<n;i++){
            int c=0;
            int nn=nums[i];
            while(nn!=0){
                nn/=10;
                c++;
            }
            if(c%2==0)
                even++;
        }
        return even;
    }
};

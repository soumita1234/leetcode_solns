class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element=0;
        for(auto it:nums){
            if(count==0){
                element=it;}
            if(it==element)
                count+=1;
            else
                count-=1;
            
        }
        return element;
    }
};

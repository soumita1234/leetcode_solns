class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0;
        int two=0;
        int zero=0;
        for(auto it: nums){
            if(it==0) zero++;
            if(it==1) one++;
            if(it==2) two++;
        }
        int i=0;
        while(zero>0){
            nums[i]=0;
            i++;
            zero--;
        }
        while(one>0){
            nums[i]=1;
            i++;
            one--;
        }
        while(two>0){
            nums[i]=2;
            i++;
            two--;
        }
    }
};

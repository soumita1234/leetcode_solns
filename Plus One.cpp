class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        int ind=digits.size()-1;
        while(ind>=0){
            if(digits[ind]==9){
                digits[ind]=0;
            }
            else{
                digits[ind]+=1;
                return digits;
            }
            ind--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

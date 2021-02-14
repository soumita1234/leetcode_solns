class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { //O(1) space   //O(n) time
        int i = digits.size()-1;
        
        if (digits[i] != 9){
            digits[i]++;
            return digits;
        }
        
        while (digits[i] == 9){
            if (i == 0){
                digits[i] = 1;
                digits.push_back(0);
                return digits;
            }
            
            digits[i] = 0;
            i--;
        }
        digits[i]++;
        return digits;
    }
};

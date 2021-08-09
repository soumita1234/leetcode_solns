class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        int carry = 0, tmp = 0;
        long int end1 = num1.length()-1, end2 = num2.length()-1;
        
        while ((end1 >=0 ) || (end2 >= 0))
        {
            tmp = carry;
            
            if (end1 >= 0)
                tmp += num1[end1--]-'0';
            
            if (end2 >= 0)
                tmp += num2[end2--]-'0';
            
            carry = tmp / 10;
            tmp %= 10;
            res = to_string(tmp) + res;
        }
        
        if (carry > 0)
            res = to_string(carry) + res;
            
        return res;
    }
};

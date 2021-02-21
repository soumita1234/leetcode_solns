class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        if(s.length()<=1) return true;
        while(start<end){
            //isalnum() is a function to check alpha numaric value
            while(start<end && !isalnum(s[start])) start++;
            while(start<end && !isalnum(s[end])) end--;
            
            if(start<end && tolower(s[start])!=tolower(s[end])) return false;
                start++;
                end--;
            
        }
        return true;
    }
};

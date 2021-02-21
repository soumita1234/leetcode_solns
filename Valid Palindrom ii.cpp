class Solution {
public:
    bool validPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        int c1=0;
        int c2=0;
        if(s.length()<=1) return true;
        while(start<end){
            //isalnum() is a function to check alpha numaric value
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                start++;
                c1++;
            }
            }
        start=0;
        end=s.length()-1;
        while(start<end){
            //isalnum() is a function to check alpha numaric value
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                end--;;
                c2++;
            }
            }
        if(c1==1 || c2==1)
            return true;
        if(c1==0 || c2==0)
            return true;
        
        return false;
        
    }
};

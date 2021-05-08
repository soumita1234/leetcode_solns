class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>count;
        for(char c:s) count[c]++;
        int res=0;
        bool odd=false;
        for(auto& c: count){
            if(c.second%2==0) res+=c.second;
            else{
                odd=true;
                res+=c.second-1;
            }
        }
        if(odd) res++;
        return res;
    }
};

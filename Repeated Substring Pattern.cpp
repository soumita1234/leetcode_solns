class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n = s.length();
        vector<int>v(n, 0);
        for(int i = 1; i < n; i++){
            int j = v[i-1];
            while(j > 0 && s[i] != s[j]) j = v[j-1];
            if(s[i] == s[j]) j++;
            v[i] = j;
        }
        int l = v[n-1];
        return (l != 0) && (l % (n-l) == 0);
    }
};

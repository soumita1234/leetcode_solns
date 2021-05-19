class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        if(n==0 || n<k) return 0;
        if(k<=1) return n;
        
        unordered_map<char, int> counts;
        for(char c:s) counts[c]++;
        
        int i=0;
        while(i<n && counts[s[i]]>=k) i++;
        if(i>=n-1) return i;
        
        int ls1= longestSubstring(s.substr(0, i),k);
        while(i<n && counts[s[i]]<k) i++;
        int ls2= (i<n)?longestSubstring(s.substr(i),k):0;
        return max(ls1,ls2);
        
    }
};

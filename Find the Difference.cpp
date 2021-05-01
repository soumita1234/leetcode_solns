class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0 ;
        for(int i=0 ; i <= t.size() - 1 ; i++){
           sum = sum + int(t[i]) - int(s[i]);
        }  
        return char(sum);
    }
};

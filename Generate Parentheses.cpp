class Solution {
public:
    vector<string> result;
    
    void getCombinations(int open, int close, int total, string s){
        if(close > open || open > total) return;
        if(open == total && close == total) {
            result.push_back(s);
            return;
        }
        getCombinations(open + 1, close, total, s + "(");
        getCombinations(open, close + 1, total, s + ")");
    }
    
    vector<string> generateParenthesis(int n) {
        getCombinations(0, 0, n, "");
        return result;
    }
};

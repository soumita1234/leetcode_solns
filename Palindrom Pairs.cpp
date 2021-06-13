class Solution {
public:
    bool isPalindrone(string s) {
        if (s.empty()) {
            return true;
        }
        int i = 0, j = s.size()-1;
        while (i < j) {
            if (s[i++] != s[j--]) {
                return false;
            }
        }
        return true;        
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string, int> dict;
        for (int i = 0; i < words.size(); ++i) {
            dict[words[i]] = i;            
        }
        vector<vector<int> > res;
        for (int i = 0; i < words.size(); ++i) {            
            string x = words[i];
            reverse(x.begin(), x.end());
            if (dict.count(x) && dict[x] != i) {
                res.push_back({i, dict[x]}); 
            }
            if (isPalindrone(words[i])) {
                if (dict.count("") && dict[""] != i) {
                    res.push_back({i, dict[""]});
                    res.push_back({dict[""], i});
                }                
            }
            
            for (int j = words[i].size()-1; j > 0; --j) { 
                if (isPalindrone(words[i].substr(j))) {
                    string s = words[i].substr(0,j);
                    reverse(s.begin(), s.end());
                    if (dict.count(s) && dict[s] != i) {
                        res.push_back({i, dict[s]});
                    }                    
                }                
            }
            for (int j = 1; j < words[i].size(); ++j) {
                if (isPalindrone(words[i].substr(0,j))) {
                    string s= words[i].substr(j);
                    reverse(s.begin(), s.end());
                    if (dict.count(s) && dict[s] != i) {
                        res.push_back({dict[s], i});
                    }
                }                
            }            
        }
        return res;        
    }
};

class Solution {
public:
    string removeDuplicateLetters(string s) {
        string str;
        vector<int> count(26);
        for (int i = 0; i < s.size(); i++)
            count[s[i] - 'a']++;
        vector<bool> visited(26, false);
        for (int i = 0; i < s.size(); i++) {
            if (visited[s[i] - 'a']) {
                count[s[i] - 'a']--;
                continue;
            }
            while (!str.empty() &&  str.back()>= s[i] && count[str.back() - 'a'] > 1) {
                count[str.back() - 'a']--;
                visited[str.back() - 'a'] = false;
                str.pop_back();
            }
            str.push_back(s[i]);
            visited[s[i] - 'a'] = true;
        }
        return str;
    }
};

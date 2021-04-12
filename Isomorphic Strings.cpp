class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        map<char,char>mp;
        set<char>sr;
        for(int i=0;i<n;i++){
            if(mp.count(s[i])==0 && sr.count(t[i])==0){
                mp[s[i]]=t[i];
                sr.insert(t[i]);
            }
            else if(mp.count(s[i])==0 && sr.count(t[i]))
                return false;
            else if(mp[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};

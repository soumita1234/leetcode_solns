class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v.push_back(i);
            }
        }
        if(v.empty()){
            return s;
        }
        int f=0;
        int l=v.size()-1;
        while(f<l){
            swap(s[v[f++]],s[v[l--]]);
        }
        return s;
    }
};

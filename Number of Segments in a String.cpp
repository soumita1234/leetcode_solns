class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0) return 0;
        int ans=0;
        
        for(int i=1;i<=s.size();++i){
            if((i==s.size() || s[i]==' ')&& s[i-1]!=' '){
                ++ans;
            }
        }
        return ans;
    }
};

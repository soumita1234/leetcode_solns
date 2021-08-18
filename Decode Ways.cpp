class Solution {
public:
    int dp[101];  
    int fun(string s,int l)
    {
        if(l>=s.length()) return dp[l]=1;
        if(s[l]=='0') return dp[l]=0;
        if(dp[l]!=-1) return dp[l];
        int ans=0;
        ans+=fun(s,l+1);
        if(l+1<s.length())
        {
            string ss;
            ss.push_back(s[l]);
            ss.push_back(s[l+1]);
            int val=stoi(ss);
            if(val<27)
                 ans+=fun(s,l+2);  
        }
        
        return dp[l]=ans;   
    }
    int numDecodings(string s) {
        for(int i=0;i<101;i++)
            dp[i]=-1;
        return fun(s,0);    
    }
};

class Solution {
public:
    int myAtoi(string s) {
        int i=0,sign=1;
        long long int ans=0;
        while(s[i]==' ')i++;
        
        if(s[i]=='-'){sign=-1;i++;}
        else if(s[i]=='+'){i++;}
        
        if(s[i]<'0' || s[i]>'9')return 0;
        for(;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10 + s[i]-'0';
                if(ans*sign>INT_MAX || ans*sign<INT_MIN){
                    if(sign==1){return INT_MAX;}
                    else if(sign==-1)return INT_MIN;
                }
            }
            else break;
        }
        ans*=(sign);
        if(ans>INT_MAX)ans=INT_MAX;
        if(ans<INT_MIN)ans=INT_MIN;
        return ans;
    }
};

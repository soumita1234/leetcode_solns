class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t="";
            s=s+'&'; // &=delimeter where use to backtracking
            int count=1;
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(count);// to_string used to convert string to integer
                    t=t+s[j-1];
                    count=1;//reset count to 1 for next iteration;
                }
            else count++;
        }
        s=t;
     }
        return s;
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack <char> sr;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                sr.push(s[i]);
            else if(s[i]=='}' || s[i]==')' || s[i]==']'){
                if(sr.empty())
                    return false;
                else if( s[i] == ')' && sr.top() != '(')
                    return false;
                else if( s[i] == '}' && sr.top() != '{')
                    return false;
                else if( s[i] == ']' && sr.top() != '[')
                    return false;
                else
                    sr.pop();
            }
        }
        if(sr.empty())
            return true;
        else
            return false;
    }
};

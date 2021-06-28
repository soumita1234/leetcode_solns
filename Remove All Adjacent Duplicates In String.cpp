class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> k;
        int n=s.length();
        for(int i=n-1; i>=0; i--){
            if(k.empty() || k.top()!=s[i])
                k.push(s[i]);
            else
                k.pop();
        }
        
        string res="";
        while(!k.empty()){
            res+=k.top();
            k.pop();
        }
        return res;
        
    }
};



class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        
        for(char& ch: s){
            if(res.empty() || res.back()!=ch){
                res.push_back(ch);
            }
            else{
                res.pop_back();
            }
        }
        
        return res;
    }
};

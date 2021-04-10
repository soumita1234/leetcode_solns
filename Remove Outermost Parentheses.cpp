class Solution {
public:
    string removeOuterParentheses(string S) {
        int n=S.length();
        string res="";
        int c=1;   
        for(int i=1;i<n;i++){
            
            if(c==0){                    
                 c=1;
                continue;
            }
            
            if(S[i]=='('){
                c++;                
                res+=S[i];                   
            }
            else{ 
                c--;                            
                if(c>0)                        
                res+=S[i];
            }
        }
        
        return res;
    }
};

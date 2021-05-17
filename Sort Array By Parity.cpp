class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int len = A.size()-1;
    for(int i = 0; i<len; i++){

        if(A[i]%2 == 1 )
        swap( A[i--], A[len--] );
    }
    return A;
        
    }
};



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        int len = n.size()-1;
        vector<int>ans;
        for(int i=0;i<=len;i++){
            if(n[i]%2==0){
                ans.push_back(n[i]);}
        
            
        }
         for(int i=0;i<=len;i++){
            if(n[i]%2!=0){
                ans.push_back(n[i]);}
             
             
        }
        return ans;
    }
};

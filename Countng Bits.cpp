class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bc(n+1,0);
        for(int i=1;i<=n;++i){
            bc[i]=bc[i>>1] + i%2;
            
        }
        return bc;
    }
};

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int r = A.size();
        int c = A[0].size();
        
        vector<vector<int>> res(c, vector<int> (r, 0));
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<r; j++)
            {
                res[i][j] = A[j][i];
            }
        }
        
        return res;
    }
};
